// rea decompile_all
// name: FUN_10019b770
// address: 0x10019b770
// body: available
// range: 0x10019b770-0x10019b99b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010019b850) */

void FUN_10019b770(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_10019c964();
  if (param_2 == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(thunk_FUN_10019bc80,0,0xd000000000000091,0x8000000100899df0,0xd00000000000001d,
                  0x8000000100899e90,0x5a,0);
  }
  else {
    puVar1 = &DAT_100a750f8;
    FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
    _swift_initStackObject();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    *(long *)(puVar1 + 0x28) = param_2;
    puVar2 = &DAT_1009a1a00;
    _swift_allocObject(&DAT_1009a1a00,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10);
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    _swift_retain(puVar2);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    FUN_100605074(puVar1);
    _swift_release_n(puVar2,2);
    _swift_setDeallocating(puVar1);
    _swift_arrayDestroy(puVar1 + 0x20,*(undefined8 *)(puVar1 + 0x10),PTR___sSSN_1009957f8);
  }
  return;
}

