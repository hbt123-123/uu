// rea decompile_all
// name: FUN_10054ccd0
// address: 0x10054ccd0
// body: available
// range: 0x10054ccd0-0x10054cd97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054ccd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar1 = 0xff;
  local_50 = param_5;
  uStack_48 = param_6;
  local_40 = param_4;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_5,PTR___sSTTL_100995860,PTR___s8IteratorSTTl_100995710);
  uVar2 = 0;
  _swift_getTupleTypeMetadata2(0,uVar1,PTR___sSiN_100995968,0,0);
  FUN_10054ce84(param_1,PTR___ss5UInt8VN_100995d40,FUN_10054d768,auStack_60,param_2,param_3,
                PTR___ss5UInt8VN_100995d40,PTR___ss5NeverON_100995d08,uVar2,
                PTR___ss5NeverOs5ErrorsWP_100995d10);
  return;
}

