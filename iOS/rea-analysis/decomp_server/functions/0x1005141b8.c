// rea decompile_all
// name: FUN_1005141b8
// address: 0x1005141b8
// body: available
// range: 0x1005141b8-0x10051423b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005141b8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [40];
  undefined8 local_50 [6];
  
  FUN_1000b142c(param_1,auStack_78);
  puVar1 = &DAT_100aaa438;
  FUN_100004bb4(&DAT_100aaa438,&DAT_1008361b0);
  _swift_dynamicCast(local_50,auStack_78,puVar1,param_2,7);
  uVar2 = *unaff_x20;
  __sSasSQRzlE2eeoiySbSayxG_ABtFZ
            (uVar2,local_50[0],*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  (**(code **)(*(long *)(param_2 + -8) + 8))(local_50,param_2);
  return (uint)uVar2 & 1;
}

