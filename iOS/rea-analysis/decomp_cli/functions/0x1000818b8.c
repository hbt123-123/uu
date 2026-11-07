// rea decompile_all
// name: FUN_1000818b8
// address: 0x1000818b8
// body: available
// range: 0x1000818b8-0x100081a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000818b8(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  long local_98 [9];
  
  lVar10 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(local_98,*(undefined8 *)(lVar10 + 0x28));
  uVar7 = (uint)param_4;
  if ((param_4 >> 8 & 1) == 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(param_2);
    if ((param_4 & 1) == 0) {
      __ss6HasherV8_combineyySuF(1);
      uVar8 = param_3;
      goto LAB_100081934;
    }
  }
  uVar8 = 0;
LAB_100081934:
  __ss6HasherV8_combineyySuF();
  __ss6HasherV9_finalizeSiyF();
  uVar2 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar8 = uVar8 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar10 + 0x38 + (uVar8 >> 3 & 0xffffffffffffff8)) >> (uVar8 & 0x3f) & 1) != 0) {
    do {
      plVar4 = (long *)(*(long *)(lVar10 + 0x30) + uVar8 * 0x18);
      lVar5 = *plVar4;
      uVar6 = plVar4[1];
      uVar3 = (ulong)*(byte *)(plVar4 + 2);
      bVar9 = *(byte *)((long)plVar4 + 0x11);
      if ((bVar9 & 1) == 0) {
        if (((uVar7 >> 8 & 1) == 0) && (lVar5 == param_2)) {
          if ((*(byte *)(plVar4 + 2) & 1) == 0) {
            if (((param_4 & 1) == 0) && (uVar6 == param_3)) {
              uVar1 = 0;
              lVar5 = param_2;
              uVar6 = param_3;
              goto LAB_100081a1c;
            }
          }
          else if ((param_4 & 1) != 0) {
            uVar1 = 0;
            lVar5 = param_2;
            goto LAB_100081a1c;
          }
        }
      }
      else if ((uVar7 >> 8 & 1) != 0) {
        uVar1 = 0;
        goto LAB_100081a1c;
      }
      uVar8 = uVar8 + 1 & ~uVar2;
    } while ((*(ulong *)(lVar10 + 0x38 + (uVar8 >> 3 & 0xffffffffffffff8)) >> (uVar8 & 0x3f) & 1) !=
             0);
  }
  bVar9 = (byte)(param_4 >> 8) & 1;
  lVar10 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar10);
  local_98[0] = *unaff_x20;
  FUN_100082130(param_2,param_3,uVar7 & 0x1ff,uVar8,lVar10);
  *unaff_x20 = local_98[0];
  uVar1 = 1;
  uVar3 = param_4;
  lVar5 = param_2;
  uVar6 = param_3;
LAB_100081a1c:
  *param_1 = lVar5;
  param_1[1] = uVar6;
  *(char *)(param_1 + 2) = (char)uVar3;
  *(byte *)((long)param_1 + 0x11) = bVar9;
  return uVar1;
}

