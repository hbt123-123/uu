// rea decompile_all
// name: FUN_1001080c8
// address: 0x1001080c8
// body: available
// range: 0x1001080c8-0x1001081db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100108144 to 0x100105714 FUN_100105714 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001080c8(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  *(long *)(unaff_x22 + 0x58) = lVar3;
  if (lVar3 != 0) {
    plVar2 = (long *)0x60;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1001081dc;
    FUN_100105714();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  FUN_100401b14(0);
  lVar3 = 0x20;
  _swift_task_alloc();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  FUN_1003fb4ec(FUN_100108548,lVar3,0xd000000000000097,0x8000000100889170,0xd00000000000001f,
                0x800000010088ab40,0x203,0);
  _swift_task_dealloc(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001001081d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

