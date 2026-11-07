// rea decompile_all
// name: FUN_1000f2568
// address: 0x1000f2568
// body: available
// range: 0x1000f2568-0x1000f26af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000f26ac to 0x1000f2704 FUN_1000f2704 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f2568(void)

{
  pid_t pVar1;
  pid_t pVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar3 = 0;
  __sSo18OS_dispatch_sourceC8DispatchE12ProcessEventVMa();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pVar1 = _getppid();
  if (1 < pVar1) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    _swift_retain(uVar6);
    __sSo18OS_dispatch_sourceC8DispatchE12ProcessEventV4exitAEvgZ(puVar5);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x100);
    puVar4 = &DAT_10099c558;
    _swift_allocObject(&DAT_10099c558,0x18,7);
    _swift_weakInit(puVar4 + 0x10);
    _swift_retain(puVar4);
    FUN_10040c454(pVar1,puVar5,uVar7,FUN_1000f44a0,puVar4);
    _swift_release(uVar6);
    _swift_release(puVar4);
    (**(code **)(lVar8 + 8))(puVar5,lVar3);
    _swift_release(puVar4);
    pVar2 = _getppid();
    if (pVar2 != pVar1) {
      FUN_1000f2704();
    }
    return;
  }
  FUN_1000f2704();
  return;
}

