// rea decompile_all
// name: FUN_1006b9440
// address: 0x1006b9440
// body: available
// range: 0x1006b9440-0x1006b952b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b9440(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  ulong uVar1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uStack_78 = param_8[0xd];
  local_80 = param_8[0xc];
  uStack_68 = param_8[0xf];
  uStack_70 = param_8[0xe];
  uStack_58 = param_8[0x11];
  local_60 = param_8[0x10];
  uStack_b8 = param_8[5];
  local_c0 = param_8[4];
  uStack_a8 = param_8[7];
  uStack_b0 = param_8[6];
  uStack_98 = param_8[9];
  local_a0 = param_8[8];
  uStack_88 = param_8[0xb];
  uStack_90 = param_8[10];
  uStack_d8 = param_8[1];
  local_e0 = *param_8;
  uStack_c8 = param_8[3];
  uStack_d0 = param_8[2];
  uVar1 = param_1;
  FUN_1006bb148(param_1,&local_e0,param_5,0,0);
  if (uVar1 < 0xffffffffffffff89) {
    uVar1 = *(ulong *)(param_1 + 0x2f0);
    FUN_1006bcc2c(uVar1,param_1 + 0x300,param_1 + 0x138,param_8,param_6,param_7,0,0,
                  *(undefined8 *)(param_1 + 0x3d8));
    if (uVar1 < 0xffffffffffffff89) {
      *(int *)(param_1 + 0x130) = (int)uVar1;
      FUN_1006b9090(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

