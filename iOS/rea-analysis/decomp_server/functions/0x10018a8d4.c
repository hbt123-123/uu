// rea decompile_all
// name: FUN_10018a8d4
// address: 0x10018a8d4
// body: available
// range: 0x10018a8d4-0x10018aa17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10018a8d4(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x29);
  __sSS6appendyySSF(0x1000000000000024,0x8000000100898530);
  uVar3 = 0;
  local_58 = param_2;
  FUN_100005b8c(0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_58,&local_50,uVar3,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x2d,0xe100000000000000);
  uVar1 = (uint)(param_4 >> 0x20);
  uVar7 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar7 == 0) {
      uVar6 = param_4 >> 0x30 & 0xff;
    }
    else {
      iVar5 = (int)((ulong)param_3 >> 0x20);
      if (SBORROW4(iVar5,(int)param_3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10018aa18);
        (*pcVar2)();
      }
      uVar6 = (ulong)(iVar5 - (int)param_3);
    }
  }
  else {
    uVar6 = 0;
    if ((uVar7 == 2) &&
       (uVar6 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10),
       SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10)))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10018a9a8);
      (*pcVar2)();
    }
  }
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_58 = uVar6;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

