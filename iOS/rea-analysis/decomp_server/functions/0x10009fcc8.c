// rea decompile_all
// name: FUN_10009fcc8
// address: 0x10009fcc8
// body: available
// range: 0x10009fcc8-0x10009fdcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009fdc8 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009fcc8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar3 + -8);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = uVar9 + *(long *)(lVar8 + 0x40);
  uVar5 = lVar1 + 0x1fU & 0xfffffffffffffff8;
  puVar4 = &DAT_100a766c0;
  FUN_100004bb4(&DAT_100a766c0,&DAT_10080b1c8);
  lVar6 = *(long *)(puVar4 + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar8 + 8))(unaff_x20 + uVar9,lVar3);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + (lVar1 + 7U & 0xfffffffffffffff8) + 8));
  plVar2 = (long *)(unaff_x20 + uVar5);
  if (*plVar2 != 0) {
    _swift_release(plVar2[1]);
  }
  (**(code **)(lVar6 + 8))(unaff_x20 + (uVar7 + uVar5 + 0x10 & (uVar7 ^ 0xffffffffffffffff)),puVar4)
  ;
  _swift_deallocObject();
  return;
}

