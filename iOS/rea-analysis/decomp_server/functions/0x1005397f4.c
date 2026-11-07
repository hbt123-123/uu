// rea decompile_all
// name: FUN_1005397f4
// address: 0x1005397f4
// body: available
// range: 0x1005397f4-0x1005398bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1005397f4(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long unaff_x21;
  undefined1 auVar2 [16];
  long local_48;
  
  puVar1 = &DAT_100aaa108;
  FUN_100004bb4(&DAT_100aaa108,&DAT_1008358d0);
  FUN_1005398bc(&local_48,param_1,param_2 & 0x1010101,param_3,param_4,puVar1,param_5,param_6,
                &PTR_PTR_1009d1680);
  if (unaff_x21 == 0) {
    param_6 = *(undefined8 *)(local_48 + 0x10);
    unaff_x21 = local_48 + 0x20;
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(unaff_x21,param_6);
    _swift_bridgeObjectRelease(local_48);
  }
  auVar2._8_8_ = param_6;
  auVar2._0_8_ = unaff_x21;
  return auVar2;
}

