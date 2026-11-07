// rea decompile_all
// name: FUN_1002d82d8
// address: 0x1002d82d8
// body: available
// range: 0x1002d82d8-0x1002d836f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d82d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (DAT_100a841f8 == 0) {
    lVar1 = 0xff;
    FUN_1002d861c(0xff,&DAT_100a84200,&DAT_100a84208,&PTR__OBJC_CLASS___NSProgress_100a659e0);
    uVar2 = 0xff;
    FUN_10004003c(0xff,&DAT_100a82228,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    _swift_getTupleTypeMetadata2(param_1,lVar1,uVar2,"handler queue ",0);
    if (lVar1 == 0) {
      DAT_100a841f8 = param_1;
    }
  }
  return;
}

