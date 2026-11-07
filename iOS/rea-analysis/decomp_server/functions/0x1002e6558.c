// rea decompile_all
// name: FUN_1002e6558
// address: 0x1002e6558
// body: available
// range: 0x1002e6558-0x1002e665f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 *
FUN_1002e6558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 auStack_b0 [5];
  undefined1 auStack_88 [24];
  long local_70;
  undefined **ppuStack_68;
  
  lVar1 = 0;
  FUN_1002f9800();
  puVar4 = (undefined8 *)
           ((long)auStack_b0 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
           );
  *puVar4 = param_1;
  _swift_storeEnumTagMultiPayload(puVar4,lVar1,2);
  FUN_1000b142c(param_2,auStack_b0);
  ppuStack_68 = &PTR_PTR_1009af628;
  puVar2 = auStack_88;
  local_70 = lVar1;
  FUN_1000efc08(puVar2);
  FUN_100082394(puVar4,puVar2,FUN_1002f9800);
  puVar3 = auStack_b0;
  FUN_1002edbcc(puVar3,param_3,param_4,param_5);
  FUN_1000d27dc(puVar4,FUN_1002f9800);
  FUN_1002eedf4(auStack_b0);
  return puVar3;
}

