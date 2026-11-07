// rea decompile_all
// name: FUN_10065df80
// address: 0x10065df80
// body: available
// range: 0x10065df80-0x10065e0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065df80(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  ulong uStack_88;
  code *local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong uStack_68;
  undefined1 local_58 [8];
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  local_70 = uVar2;
  if ((uVar1 >> 0x3c & 1) != 0) {
    uVar5 = uVar1;
    FUN_10065e0d8();
    _swift_bridgeObjectRelease(uVar1);
    *unaff_x20 = uVar2;
    unaff_x20[1] = uVar5;
    local_70 = uVar2;
    uVar1 = uVar5;
  }
  if ((uVar1 >> 0x3d & 1) == 0) {
    if ((local_70 >> 0x3c & 1) == 0) {
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(local_70,uVar1);
    }
    else {
      local_70 = (uVar1 & 0xfffffffffffffff) + 0x20;
    }
    (*param_2)(param_1,local_70);
  }
  else {
    uStack_88 = uVar1 >> 0x38 & 0xf;
    uStack_68 = uVar1 & 0xffffffffffffff;
    puVar3 = &DAT_100ab90c8;
    local_90 = param_4;
    local_80 = param_2;
    uStack_78 = param_3;
    FUN_100004bb4(&DAT_100ab90c8,&DAT_10084b5a0);
    puVar4 = &DAT_100ab90d0;
    FUN_100004bb4(&DAT_100ab90d0,&DAT_10084b5a8);
    FUN_10065e128(param_1,&local_70,FUN_10065e9b8,auStack_a0,puVar3,puVar4,param_4,
                  PTR___ss5ErrorWS_100995c48,local_58);
  }
  return;
}

