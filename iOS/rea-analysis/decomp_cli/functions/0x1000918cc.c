// rea decompile_all
// name: FUN_1000918cc
// address: 0x1000918cc
// body: available
// range: 0x1000918cc-0x100091c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100091aa4) */

void FUN_1000918cc(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  undefined **unaff_x21;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong local_160 [2];
  byte local_150;
  undefined *local_148;
  undefined **ppuStack_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 *puStack_128;
  undefined *local_120;
  undefined1 auStack_118 [16];
  undefined8 local_108;
  long lStack_100;
  undefined8 local_80;
  long lStack_78;
  
  (**(code **)(*(long *)(param_2 + 0x18) + 0x10))(auStack_118,*(undefined8 *)(param_2 + 0x10));
  lStack_78 = lStack_100;
  local_80 = local_108;
  puVar6 = &DAT_100104b58;
  FUN_1000133cc(&local_80,&local_1a0,&DAT_100104b58,&DAT_1000d5be8);
  puVar4 = auStack_118;
  FUN_10006e954();
  if (lStack_78 != 0) {
    FUN_10001fc18(&local_80,&DAT_100104b58,&DAT_1000d5be8);
    return;
  }
  FUN_100095900();
  puVar5 = &DAT_1000f9fe0;
  FUN_100093b84();
  local_130 = puVar5;
  puStack_128 = puVar4;
  local_120 = puVar6;
  FUN_100090d58(&local_1a0,param_1);
  if (unaff_x21 == (undefined **)0x0) {
    puVar6 = &DAT_100104408;
    FUN_10000eb08(&DAT_100104408,&DAT_1000d5bb0);
    unaff_x21 = &local_148;
    _swift_dynamicCast(unaff_x21,&local_1a0,puVar6,&DAT_1000f9fe0,6);
    puVar2 = local_138;
    ppuVar1 = ppuStack_140;
    puVar8 = local_148;
    if (((ulong)unaff_x21 & 1) != 0) {
      FUN_100095014(param_3,param_4);
      if (((ulong)puVar2 & 1) != 0) {
        _swift_retain(ppuVar1);
        goto LAB_100091c10;
      }
      puVar7 = param_3;
      FUN_10007b098();
      _swift_allocError(&DAT_1000f9e40,puVar7,0,0);
      *puVar7 = param_3;
      puVar7[1] = puVar8;
      puVar7[2] = ppuVar1;
      puVar7[6] = uStack_188;
      puVar7[5] = uStack_190;
      puVar7[4] = uStack_198;
      puVar7[3] = local_1a0;
      puVar7[8] = uStack_178;
      puVar7[7] = local_180;
      puVar7[10] = uStack_168;
      puVar7[9] = uStack_170;
      *(undefined1 *)(puVar7 + 0xb) = 1;
      _swift_willThrow();
      _swift_release(puVar4);
      _swift_release(puVar5);
      goto LAB_100091bb8;
    }
  }
  else {
    _swift_errorRelease();
  }
  FUN_100095940();
  puVar8 = &DAT_1000f9f60;
  FUN_100093b84();
  local_148 = puVar8;
  ppuStack_140 = unaff_x21;
  local_138 = puVar6;
  FUN_100090d58(&local_1a0,param_1);
  puVar6 = &DAT_100104408;
  FUN_10000eb08(&DAT_100104408,&DAT_1000d5bb0);
  puVar9 = local_160;
  _swift_dynamicCast(puVar9,&local_1a0,puVar6,&DAT_1000f9f60,6);
  if (((ulong)puVar9 & 1) != 0) {
    if ((local_150 & 1) != 0) {
LAB_100091c10:
      FUN_100075a04(0x10000000000001ba,0x80000001000ca350);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100091c20);
      (*pcVar3)();
    }
    if ((local_160[0] & 1) != 0) {
      FUN_100095014(param_3,param_4);
      puVar7 = param_3;
      FUN_10007b098();
      _swift_allocError(&DAT_1000f9e40,puVar7,0,0);
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = param_3;
      puVar7[4] = uStack_198;
      puVar7[3] = local_1a0;
      puVar7[8] = uStack_178;
      puVar7[7] = local_180;
      puVar7[6] = uStack_188;
      puVar7[5] = uStack_190;
      puVar7[10] = uStack_168;
      puVar7[9] = uStack_170;
      *(undefined1 *)(puVar7 + 0xb) = 1;
      _swift_willThrow();
    }
  }
  _swift_release(unaff_x21);
  _swift_release(puVar8);
  puVar6 = local_138;
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(puVar6);
LAB_100091bb8:
  _swift_bridgeObjectRelease(local_120);
  return;
}

