// rea decompile_all
// name: FUN_100351624
// address: 0x100351624
// body: available
// range: 0x100351624-0x100351723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100351720 to 0x1007df454 _swift_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100351624(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  long lVar11;
  undefined *puVar12;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined1 *)(unaff_x20 + 0x48);
  FUN_100357c88();
  lVar11 = param_2;
  _swift_allocObject();
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined8 *)(lVar11 + 0x20) = uVar5;
  *(undefined8 *)(lVar11 + 0x10) = uVar1;
  *(undefined1 *)(lVar11 + 0x28) = uVar9;
  *(undefined8 *)(lVar11 + 0x30) = uVar2;
  *(undefined8 *)(lVar11 + 0x38) = uVar6;
  *(undefined8 *)(lVar11 + 0x40) = uVar3;
  *(undefined8 *)(lVar11 + 0x48) = uVar7;
  *(undefined1 *)(lVar11 + 0x50) = uVar10;
  *(undefined8 *)(lVar11 + 0x58) = uVar4;
  *(undefined8 *)(lVar11 + 0x60) = uVar8;
  param_1[3] = param_2;
  puVar12 = &DAT_100a88410;
  FUN_100358110(&DAT_100a88410,FUN_100357c88,&TargetProtocolConformanceDescriptor_10081c0b8);
  param_1[4] = (long)puVar12;
  *param_1 = lVar11;
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar1);
  FUN_100317824(uVar2,uVar6);
  FUN_100357714(uVar3,uVar7,uVar10);
  _swift_retain(uVar8);
  return;
}

