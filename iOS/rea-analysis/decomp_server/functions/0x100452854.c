// rea decompile_all
// name: FUN_100452854
// address: 0x100452854
// body: available
// range: 0x100452854-0x10045292f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100452854(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  ulong uVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint local_38;
  byte local_34;
  
  local_38 = 0;
  local_34 = 1;
  (**(code **)(param_4 + 0x80))(&local_38,param_3,param_4);
  if ((unaff_x21 == 0) && ((local_34 & 1) == 0)) {
    uVar1 = (ulong)local_38;
    if (((*(ulong *)(param_2 + 0x48) & *(ulong *)(param_2 + 0x58) ^ 0xffffffffffffffff) &
        0x3000000000000000) != 0) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    uStack_78 = *(undefined8 *)(param_2 + 0x28);
    local_80 = *(undefined8 *)(param_2 + 0x20);
    uStack_68 = *(undefined8 *)(param_2 + 0x38);
    uStack_70 = *(undefined8 *)(param_2 + 0x30);
    uStack_58 = *(undefined8 *)(param_2 + 0x48);
    local_60 = *(undefined8 *)(param_2 + 0x40);
    uStack_48 = *(undefined8 *)(param_2 + 0x58);
    uStack_50 = *(undefined8 *)(param_2 + 0x50);
    *(ulong *)(param_2 + 0x20) = uVar1;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0x2000000000000000;
    FUN_100040bb4(&local_80,&DAT_100a9ff68,&DAT_10082b0d0);
  }
  return;
}

