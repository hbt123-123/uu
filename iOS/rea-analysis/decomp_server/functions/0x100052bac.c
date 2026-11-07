// rea decompile_all
// name: FUN_100052bac
// address: 0x100052bac
// body: available
// range: 0x100052bac-0x100052dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100052bac(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 *param_11)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_2d8 [16];
  undefined8 local_258;
  undefined1 auStack_188 [24];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined6 uStack_108;
  undefined2 uStack_102;
  undefined6 uStack_100;
  undefined8 uStack_fa;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined8 uStack_7b;
  
  _swift_beginAccess(param_2 + 0x10,auStack_188,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uStack_128 = param_1[9];
    local_130 = param_1[8];
    uStack_118 = param_1[0xb];
    uStack_120 = param_1[10];
    local_110 = param_1[0xc];
    uStack_108 = (undefined6)param_1[0xd];
    uStack_fa = *(undefined8 *)((long)param_1 + 0x76);
    uStack_102 = (undefined2)*(undefined8 *)((long)param_1 + 0x6e);
    uStack_100 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 0x6e) >> 0x10);
    uStack_168 = param_1[1];
    local_170 = *param_1;
    uStack_158 = param_1[3];
    uStack_160 = param_1[2];
    uStack_148 = param_1[5];
    local_150 = param_1[4];
    uStack_138 = param_1[7];
    uStack_140 = param_1[6];
    iVar2 = (int)&local_170;
    FUN_10007f30c();
    if (iVar2 == 1) {
      FUN_100008290(&local_170);
      if (SCARRY8(param_4,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100052dfc);
        (*pcVar1)();
      }
      puVar4 = &DAT_100a75970;
      FUN_100004bb4(&DAT_100a75970,&DAT_10080a9c0);
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(undefined8 *)(puVar4 + 0x20) = *param_11;
      local_2d8[0] = param_7;
      _swift_bridgeObjectRetain(param_7);
      FUN_10005f748(puVar4);
      param_7 = local_2d8[0];
      uVar5 = local_2d8[0];
    }
    else {
      puVar3 = &local_170;
      FUN_100008290();
      uStack_a8 = puVar3[9];
      local_b0 = puVar3[8];
      uStack_98 = puVar3[0xb];
      uStack_a0 = puVar3[10];
      local_90 = puVar3[0xc];
      uStack_88 = (undefined5)puVar3[0xd];
      uStack_7b = *(undefined8 *)((long)puVar3 + 0x75);
      uStack_83 = (undefined3)*(undefined8 *)((long)puVar3 + 0x6d);
      uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)puVar3 + 0x6d) >> 0x18);
      uStack_e8 = puVar3[1];
      local_f0 = *puVar3;
      uStack_d8 = puVar3[3];
      uStack_e0 = puVar3[2];
      uStack_c8 = puVar3[5];
      local_d0 = puVar3[4];
      uStack_b8 = puVar3[7];
      uStack_c0 = puVar3[6];
      if (SCARRY8(param_4,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100052e00);
        (*pcVar1)();
      }
      puVar4 = &DAT_100a75990;
      FUN_100004bb4(&DAT_100a75990,&DAT_100809a50);
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x78) = uStack_98;
      *(undefined8 *)(puVar4 + 0x70) = uStack_a0;
      *(ulong *)(puVar4 + 0x88) = CONCAT35(uStack_83,uStack_88);
      *(undefined8 *)(puVar4 + 0x80) = local_90;
      *(undefined8 *)(puVar4 + 0x95) = uStack_7b;
      *(ulong *)(puVar4 + 0x8d) = CONCAT53(uStack_80,uStack_83);
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(undefined8 *)(puVar4 + 0x28) = uStack_e8;
      *(undefined8 *)(puVar4 + 0x20) = local_f0;
      *(undefined8 *)(puVar4 + 0x38) = uStack_d8;
      *(undefined8 *)(puVar4 + 0x30) = uStack_e0;
      *(undefined8 *)(puVar4 + 0x48) = uStack_c8;
      *(undefined8 *)(puVar4 + 0x40) = local_d0;
      *(undefined8 *)(puVar4 + 0x58) = uStack_b8;
      *(undefined8 *)(puVar4 + 0x50) = uStack_c0;
      *(undefined8 *)(puVar4 + 0x68) = uStack_a8;
      *(undefined8 *)(puVar4 + 0x60) = local_b0;
      local_258 = param_6;
      FUN_10007f314(param_1,local_2d8,&DAT_100a76240,&DAT_10080aa10);
      _swift_bridgeObjectRetain(param_6);
      FUN_10005f830(puVar4);
      param_6 = local_258;
      uVar5 = local_258;
    }
    FUN_100052918(param_3,param_4 + 1,param_5,param_6,param_7,param_8,param_9,param_10);
    _swift_bridgeObjectRelease(uVar5);
    _swift_release(param_2);
  }
  return;
}

