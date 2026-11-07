// rea decompile_all
// name: FUN_100179b60
// address: 0x100179b60
// body: available
// range: 0x100179b60-0x100179c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100179b60(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_48;
  
  uVar4 = (ulong)param_1[0x13] >> 0x3c;
  lVar1 = 0;
  if (uVar4 < 0xf) {
    lVar1 = param_1[0x11];
  }
  lVar2 = 0;
  if (uVar4 < 0xf) {
    lVar2 = param_1[0x12];
  }
  uVar3 = 0xc000000000000000;
  if (uVar4 < 0xf) {
    uVar3 = param_1[0x13];
  }
  FUN_100040b80();
  FUN_100006cdc(lVar2,uVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  local_48 = lVar1;
  _swift_retain(uVar5);
  FUN_1003e37e8(&local_f0,&local_48);
  _swift_release(uVar5);
  lVar2 = local_f0;
  if (local_f0 != 0) {
    _swift_release(lStack_e8);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    local_f0 = lVar1;
    _swift_retain(uVar5);
    FUN_1003e30b8(&local_f0);
    _swift_release(uVar5);
    lStack_88 = param_1[0xd];
    local_90 = param_1[0xc];
    lStack_78 = param_1[0xf];
    lStack_80 = param_1[0xe];
    lStack_68 = param_1[0x11];
    local_70 = param_1[0x10];
    lStack_58 = param_1[0x13];
    lStack_60 = param_1[0x12];
    lStack_c8 = param_1[5];
    local_d0 = param_1[4];
    lStack_b8 = param_1[7];
    lStack_c0 = param_1[6];
    lStack_a8 = param_1[9];
    local_b0 = param_1[8];
    lStack_98 = param_1[0xb];
    lStack_a0 = param_1[10];
    lStack_e8 = param_1[1];
    local_f0 = *param_1;
    lStack_d8 = param_1[3];
    lStack_e0 = param_1[2];
    FUN_10061630c(&local_f0);
    _swift_release(lVar2);
  }
  return;
}

