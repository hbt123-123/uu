// rea decompile_all
// name: FUN_100082130
// address: 0x100082130
// body: available
// range: 0x100082130-0x10008230b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100082130(long param_1,ulong param_2,uint param_3,ulong param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *unaff_x20;
  long lVar7;
  undefined1 auStack_88 [72];
  
  uVar5 = *(ulong *)(*unaff_x20 + 0x10);
  uVar1 = *(ulong *)(*unaff_x20 + 0x18);
  if ((uVar5 < uVar1) && ((param_5 & 1) != 0)) goto LAB_1000822a4;
  if ((param_5 & 1) == 0) {
    if (uVar5 < uVar1) {
      FUN_1000825c4();
      goto LAB_1000822a4;
    }
    FUN_1000829c0(uVar5 + 1);
  }
  else {
    FUN_100082fd0(uVar5 + 1);
  }
  lVar7 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_88,*(undefined8 *)(lVar7 + 0x28));
  if ((param_3 >> 8 & 1) == 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(param_1);
    if ((param_3 & 1) != 0) goto LAB_1000821d8;
    __ss6HasherV8_combineyySuF(1);
    param_4 = param_2;
  }
  else {
LAB_1000821d8:
    param_4 = 0;
  }
  __ss6HasherV8_combineyySuF();
  __ss6HasherV9_finalizeSiyF();
  uVar5 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  param_4 = param_4 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar7 + 0x38 + (param_4 >> 3 & 0xffffffffffffff8)) >> (param_4 & 0x3f) & 1) != 0)
  {
    do {
      plVar6 = (long *)(*(long *)(lVar7 + 0x30) + param_4 * 0x18);
      if ((*(byte *)((long)plVar6 + 0x11) & 1) == 0) {
        if (((param_3 >> 8 & 1) == 0) && (*plVar6 == param_1)) {
          uVar2 = param_3;
          if ((*(byte *)(plVar6 + 2) & 1) != 0) goto joined_r0x000100082238;
          if (((param_3 & 1) == 0) && (plVar6[1] == param_2)) goto LAB_100082294;
        }
      }
      else {
        uVar2 = param_3 >> 8;
joined_r0x000100082238:
        if ((uVar2 & 1) != 0) {
LAB_100082294:
          __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&DAT_1000fa530);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000822a4);
          (*pcVar3)();
        }
      }
      param_4 = param_4 + 1 & ~uVar5;
    } while ((*(ulong *)(lVar7 + 0x38 + (param_4 >> 3 & 0xffffffffffffff8)) >> (param_4 & 0x3f) & 1)
             != 0);
  }
LAB_1000822a4:
  lVar4 = *unaff_x20;
  lVar7 = lVar4 + (param_4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x38) = *(ulong *)(lVar7 + 0x38) | 1L << (param_4 & 0x3f);
  plVar6 = (long *)(*(long *)(lVar4 + 0x30) + param_4 * 0x18);
  *plVar6 = param_1;
  plVar6[1] = param_2;
  *(char *)(plVar6 + 2) = (char)param_3;
  *(byte *)((long)plVar6 + 0x11) = (byte)(param_3 >> 8) & 1;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10008230c);
    (*pcVar3)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return;
}

