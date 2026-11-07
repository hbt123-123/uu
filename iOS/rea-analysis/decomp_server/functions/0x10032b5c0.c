// rea decompile_all
// name: FUN_10032b5c0
// address: 0x10032b5c0
// body: available
// range: 0x10032b5c0-0x10032b6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10032b6a4 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032b5c0(void)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = 0;
  FUN_10032b6a8(0,uVar6);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff));
  lVar5 = 0;
  __sScS12ContinuationV15BufferingPolicyOMa(0,uVar6);
  (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar1,lVar5);
  plVar2 = (long *)(lVar1 + *(int *)(lVar4 + 0x1c));
  if (*plVar2 != 0) {
    _swift_release(plVar2[1]);
  }
  iVar3 = *(int *)(lVar4 + 0x20);
  lVar5 = 0;
  __sScSMa(0,uVar6);
  (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar1 + iVar3,lVar5);
  iVar3 = *(int *)(lVar4 + 0x24);
  lVar4 = 0;
  __sScS12ContinuationVMa(0,uVar6);
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar1 + iVar3,lVar4);
  _swift_deallocObject();
  return;
}

