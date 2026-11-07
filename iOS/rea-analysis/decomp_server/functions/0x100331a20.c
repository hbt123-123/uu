// rea decompile_all
// name: FUN_100331a20
// address: 0x100331a20
// body: available
// range: 0x100331a20-0x100331ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100331ae4 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100331a20(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  uVar5 = (ulong)*(byte *)(*(long *)(puVar2 + -8) + 0x50);
  uVar5 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(*(long *)(puVar2 + -8) + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar7 = *(long *)(lVar3 + -8);
  lVar4 = unaff_x20 + uVar5;
  (**(code **)(lVar7 + 0x30))(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 8))(unaff_x20 + uVar5,lVar3);
  }
  puVar1 = (undefined8 *)(unaff_x20 + (lVar6 + uVar5 + 7 & 0xfffffffffffffff8) + 8);
  FUN_1001803c8(*puVar1,*(undefined1 *)(puVar1 + 1));
  _swift_deallocObject();
  return;
}

