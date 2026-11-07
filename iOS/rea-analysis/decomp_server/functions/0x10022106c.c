// rea decompile_all
// name: FUN_10022106c
// address: 0x10022106c
// body: available
// range: 0x10022106c-0x1002210fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022106c(undefined1 *param_1,void *param_2,undefined8 param_3,uchar *param_4,
                  undefined8 param_5,long param_6,ulong param_7)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (int)((ulong)param_6 >> 0x20);
  if ((param_2 == (void *)0x0) || (param_4 == (uchar *)0x0)) goto LAB_1002210e4;
  uVar1 = (uint)(param_7 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      uVar3 = param_7 >> 0x30 & 0xff;
    }
    else {
      if (SBORROW4(iVar4,(int)param_6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002210fc);
        (*pcVar2)();
      }
      uVar3 = (ulong)(iVar4 - (int)param_6);
LAB_1002210c4:
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002210f8);
        (*pcVar2)();
      }
      if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002210d4);
        (*pcVar2)();
      }
    }
  }
  else {
    if (uVar5 == 2) {
      uVar3 = *(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10);
      if (SBORROW8(*(long *)(param_6 + 0x18),*(long *)(param_6 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002210b4);
        (*pcVar2)();
      }
      goto LAB_1002210c4;
    }
    uVar3 = 0;
  }
  _CC_MD5(param_2,(CC_LONG)uVar3,param_4);
LAB_1002210e4:
  *param_1 = 0;
  return;
}

