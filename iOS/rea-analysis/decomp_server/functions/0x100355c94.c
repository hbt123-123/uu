// rea decompile_all
// name: FUN_100355c94
// address: 0x100355c94
// body: available
// range: 0x100355c94-0x100355daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100355da8 to 0x1007df454 _swift_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100355c94(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar8 = *(undefined1 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  FUN_100357ba0();
  lVar10 = param_2;
  _swift_allocObject();
  *(undefined8 *)(lVar10 + 0x10) = uVar13;
  *(undefined8 *)(lVar10 + 0x18) = uVar12;
  *(undefined1 *)(lVar10 + 0x20) = uVar7;
  *(undefined8 *)(lVar10 + 0x28) = uVar1;
  *(undefined8 *)(lVar10 + 0x30) = uVar4;
  *(undefined8 *)(lVar10 + 0x38) = uVar2;
  *(undefined8 *)(lVar10 + 0x40) = uVar5;
  *(undefined1 *)(lVar10 + 0x48) = uVar8;
  *(undefined8 *)(lVar10 + 0x50) = uVar3;
  *(undefined8 *)(lVar10 + 0x58) = uVar6;
  param_1[3] = param_2;
  puVar11 = &DAT_100a88418;
  FUN_100358110(&DAT_100a88418,FUN_100357ba0,&TargetProtocolConformanceDescriptor_10081c450);
  param_1[4] = (long)puVar11;
  *param_1 = lVar10;
  if (!SCARRY8(*(long *)(unaff_x20 + 0x18),1)) {
    *(long *)(unaff_x20 + 0x18) = *(long *)(unaff_x20 + 0x18) + 1;
    _swift_retain(uVar12);
    _swift_bridgeObjectRetain(uVar13);
    FUN_100317824(uVar1,uVar4);
    FUN_100357714(uVar2,uVar5,uVar8);
    _swift_retain(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100355db0);
  (*pcVar9)();
}

