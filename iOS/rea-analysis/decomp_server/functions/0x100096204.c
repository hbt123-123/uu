// rea decompile_all
// name: FUN_100096204
// address: 0x100096204
// body: available
// range: 0x100096204-0x1000962d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100096204(void *param_1,undefined8 param_2,long param_3,ulong param_4,ulong *param_5)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = (uint)(param_4 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      uVar7 = param_4 >> 0x30 & 0xff;
      goto LAB_100096278;
    }
    iVar6 = (int)((ulong)param_3 >> 0x20);
    if (SBORROW4(iVar6,(int)param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000962d8);
      (*pcVar2)();
    }
    uVar7 = (ulong)(iVar6 - (int)param_3);
  }
  else {
    if (uVar5 != 2) {
      uVar7 = 0;
      goto LAB_100096278;
    }
    uVar7 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
    if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100096254);
      (*pcVar2)();
    }
  }
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000962d4);
    (*pcVar2)();
  }
  if (uVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100096274);
    (*pcVar2)();
  }
LAB_100096278:
  uVar8 = *param_5;
  uVar3 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *param_5 = uVar8;
  uVar4 = uVar8;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_100034f8c(0,*(undefined8 *)(uVar8 + 0x10),0,uVar8);
  }
  *param_5 = uVar4;
  _CC_MD5(param_1,(CC_LONG)uVar7,(uchar *)(uVar4 + 0x20));
  return;
}

