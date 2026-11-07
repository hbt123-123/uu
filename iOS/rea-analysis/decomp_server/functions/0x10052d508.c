// rea decompile_all
// name: FUN_10052d508
// address: 0x10052d508
// body: available
// range: 0x10052d508-0x10052d69b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052d508(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong *unaff_x20;
  
  uVar7 = *unaff_x20;
  uVar3 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_100506f84(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar7 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_100506f84(uVar7,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
  *(undefined1 *)(uVar7 + uVar3 + 0x20) = 0x22;
  *unaff_x20 = uVar7;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((param_2 >> 0x30 & 0xff) == 0) goto LAB_10052d5b0;
    }
    else {
      iVar6 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar6,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10052d69c);
        (*pcVar2)();
      }
      if (iVar6 - (int)param_1 < 1) goto LAB_10052d5b0;
    }
  }
  else {
    if (uVar5 != 2) goto LAB_10052d5b0;
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10052d698);
      (*pcVar2)();
    }
    if (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) < 1) goto LAB_10052d5b0;
  }
  FUN_100531ef0(param_1,param_2);
  uVar7 = *unaff_x20;
LAB_10052d5b0:
  uVar3 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_100506f84(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar7 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_100506f84(uVar7,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
  *(undefined1 *)(uVar7 + uVar3 + 0x20) = 0x22;
  *unaff_x20 = uVar7;
  return;
}

