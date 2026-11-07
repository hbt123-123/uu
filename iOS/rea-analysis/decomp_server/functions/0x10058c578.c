// rea decompile_all
// name: FUN_10058c578
// address: 0x10058c578
// body: available
// range: 0x10058c578-0x10058c767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10058c578(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  char local_41;
  
  uVar1 = param_1;
  if (unaff_x20[3] != 0) {
    uVar1 = unaff_x20[2];
    (**(code **)(param_3 + 0x70))(uVar1,unaff_x20[3],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (unaff_x20[8] != 0) {
      uVar1 = unaff_x20[7];
      (**(code **)(param_3 + 0x70))(uVar1,unaff_x20[8],2,param_2,param_3);
    }
    if ((*(byte *)((long)unaff_x20 + 0x24) & 1) == 0) {
      uVar1 = (ulong)*(uint *)(unaff_x20 + 4);
      (**(code **)(param_3 + 0x18))(uVar1,3,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x25) != '\x03') {
      pcVar2 = *(code **)(param_3 + 0x80);
      local_41 = *(char *)((long)unaff_x20 + 0x25);
      FUN_1005b2c94();
      (*pcVar2)(&local_41,4,&DAT_1009d4b58,uVar1,param_2,param_3);
    }
    FUN_10058c768();
    if (unaff_x20[6] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[5],unaff_x20[6],6,param_2,param_3);
    }
    if (unaff_x20[10] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[9],unaff_x20[10],7,param_2,param_3);
    }
    FUN_10058c7dc();
    if ((*(byte *)((long)unaff_x20 + 0x5c) & 1) == 0) {
      (**(code **)(param_3 + 0x18))(*(undefined4 *)(unaff_x20 + 0xb),9,param_2,param_3);
    }
    if (unaff_x20[0xd] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[0xc],unaff_x20[0xd],10,param_2,param_3);
    }
    if (*(byte *)(unaff_x20 + 0x12) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 0x12) & 1,0x11,param_2,param_3);
    }
    FUN_10056301c(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}

