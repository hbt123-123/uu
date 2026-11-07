// rea decompile_all
// name: FUN_100317cac
// address: 0x100317cac
// body: available
// range: 0x100317cac-0x100317d4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100317cac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (DAT_100a858d0 != 0) {
    return;
  }
  puVar1 = &DAT_100a858d8;
  FUN_100004c48(&DAT_100a858d8,&DAT_100819c80);
  uVar2 = 0xff;
  FUN_10004003c(0xff,&DAT_100a858e0,&PTR__OBJC_CLASS___NSURLSessionDataTask_100a65a38);
  uVar3 = 0xff;
  FUN_10004003c(0xff,&DAT_100a858e8,&PTR__OBJC_CLASS___NSCachedURLResponse_100a65a40);
  uVar4 = 0x44000002;
  _swift_getFunctionTypeMetadata2(0x44000002,uVar2,uVar3,puVar1);
  DAT_100a858d0 = uVar4;
  return;
}

