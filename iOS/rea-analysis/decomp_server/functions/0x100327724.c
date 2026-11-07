// rea decompile_all
// name: FUN_100327724
// address: 0x100327724
// body: available
// range: 0x100327724-0x1003277ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100327724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = &DAT_100a82488;
  FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
  lVar2 = 0;
  FUN_10030528c(0,param_3,puVar1,PTR___ss5ErrorWS_100995c48);
  lVar3 = *(long *)(lVar2 + -8);
  (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001003277a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1,0,1,lVar2);
  return;
}

