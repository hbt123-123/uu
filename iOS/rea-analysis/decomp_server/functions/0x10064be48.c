// rea decompile_all
// name: FUN_10064be48
// address: 0x10064be48
// body: available
// range: 0x10064be48-0x10064bfaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064be48(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined *param_5)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  iVar3 = (int)param_2;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if (1 < (param_3 >> 0x30 & 0xff)) {
LAB_10064bec0:
        if (uVar5 == 0) {
          if ((param_3 & 0xff000000000000) != 0) {
            lVar6 = 0;
            goto LAB_10064bf1c;
          }
        }
        else if (uVar5 == 2) {
          lVar6 = *(long *)(param_2 + 0x10);
          if (lVar6 != *(long *)(param_2 + 0x18)) {
LAB_10064bf1c:
            __s10Foundation4DataV15_RepresentationOys5UInt8VSicig(lVar6,param_2,param_3);
            bVar11 = (byte)lVar6 & 1;
            FUN_100008184(param_2,param_3);
            uVar4 = param_3;
            FUN_100343c58(&local_60,1,param_2);
            uVar10 = (undefined1)uVar4;
            uVar8 = local_60;
            uVar9 = uStack_58;
            FUN_10064c630();
            FUN_100006cdc(param_2,param_3);
            goto LAB_10064bf7c;
          }
        }
        else {
          lVar6 = (long)iVar3;
          if (lVar6 != param_2 >> 0x20) goto LAB_10064bf1c;
        }
      }
    }
    else {
      iVar7 = (int)((ulong)param_2 >> 0x20);
      if (SBORROW4(iVar7,iVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10064bfb0);
        (*pcVar2)();
      }
      if (1 < iVar7 - iVar3) goto LAB_10064bec0;
    }
  }
  else if (uVar5 == 2) {
    if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10064bfac);
      (*pcVar2)();
    }
    if (1 < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) goto LAB_10064bec0;
  }
  FUN_100006cdc();
  bVar11 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  param_5 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_10064bf7c:
  *param_1 = uVar8;
  param_1[1] = uVar9;
  *(undefined1 *)(param_1 + 2) = uVar10;
  param_1[3] = param_5;
  *(byte *)(param_1 + 4) = bVar11;
  return;
}

