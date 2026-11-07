// rea decompile_all
// name: FUN_10033bc28
// address: 0x10033bc28
// body: available
// range: 0x10033bc28-0x10033bd13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033bc28(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  
  puVar1 = &DAT_100a846a0;
  FUN_100004bb4(&DAT_100a846a0,&DAT_100818fb0);
  puVar4 = (undefined8 *)
           (&stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_10033b300(puVar4);
  puVar2 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,puVar1);
  if ((int)puVar2 == 1) {
    local_38 = *puVar4;
    uVar3 = 0xf;
    __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xf,0,0,0x12,0,0);
    if ((uVar3 & 1) != 0) {
      puVar1 = &DAT_100a82488;
      FUN_100004bb4(&DAT_100a82488,&DAT_100816c20);
      _swift_willThrowTypedImpl(&local_38,puVar1,PTR___ss5ErrorWS_100995c48);
    }
  }
  else {
    FUN_1002f9814(puVar4,param_1);
  }
  return;
}

