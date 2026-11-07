// rea decompile_all
// name: FUN_10041ee08
// address: 0x10041ee08
// body: available
// range: 0x10041ee08-0x10041eef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041ee08(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  ulong local_50;
  undefined1 local_48;
  
  uVar1 = unaff_x20[1];
  uVar2 = *unaff_x20 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar2 = uVar1 >> 0x38 & 0xf;
  }
  if (((uVar2 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar1,1,param_2,param_3), unaff_x21 == 0)) &&
     ((uVar2 = (ulong)(uint)unaff_x20[2], (uint)unaff_x20[2] == 0 ||
      ((**(code **)(param_3 + 0x18))(uVar2,2,param_2,param_3), unaff_x21 == 0)))) {
    if (unaff_x20[3] != 0) {
      local_48 = (undefined1)unaff_x20[4];
      pcVar3 = *(code **)(param_3 + 0x80);
      local_50 = unaff_x20[3];
      FUN_10042dad0();
      (*pcVar3)(&local_50,3,&DAT_1009c0860,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    FUN_10056301c(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}

