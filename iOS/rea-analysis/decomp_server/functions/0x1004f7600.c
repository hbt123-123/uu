// rea decompile_all
// name: FUN_1004f7600
// address: 0x1004f7600
// body: available
// range: 0x1004f7600-0x1004f79f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004f77a0) */
/* WARNING: Removing unreachable block (ram,0x0001004f7894) */

void FUN_1004f7600(undefined *param_1,undefined1 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_260 [24];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined *puStack_230;
  undefined8 *local_228;
  undefined1 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined1 uStack_1e7;
  undefined6 uStack_1e6;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined *local_188;
  undefined1 *puStack_180;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *local_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *local_a0;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_98,1,0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined **)(unaff_x20 + 0x10) = param_1;
  *(undefined1 **)(unaff_x20 + 0x18) = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar7);
  FUN_1005188b8();
  puVar6 = param_2;
  FUN_100519568();
  _swift_bridgeObjectRelease();
  if (param_1 == (undefined *)0x0) {
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,param_2,0,0);
    *param_2 = 0;
    _swift_willThrow();
  }
  else {
    FUN_10055db34();
    if (unaff_x21 == 0) {
      FUN_1004f9b50(param_3,&local_1a0);
      uStack_1f0 = 0;
      FUN_1004f9b50(&local_1a0,&local_248);
      local_1e8 = SUB81(param_2,0);
      uStack_1e7 = 0;
      puVar4 = param_1;
      _swift_conformsToProtocol(param_1,&TargetProtocolDescriptor_10090176c);
      if (puVar4 == (undefined *)0x0) {
        FUN_1004f9b10();
        _swift_allocError(&DAT_1009d1c98,puVar4,0,0);
        *puVar4 = 6;
        _swift_willThrow();
        FUN_1004f9b8c(&local_1a0);
        FUN_1004f9b8c(&local_248);
      }
      else {
        (**(code **)(puVar4 + 8))(&local_80,param_1,puVar4);
        FUN_1004f9b8c(&local_1a0);
        uStack_1c8 = uStack_68;
        local_1d0 = uStack_70;
        uStack_1d8 = uStack_78;
        uStack_1e0 = local_80;
        uStack_1b8 = uStack_58;
        local_1c0 = local_60;
        uStack_f8 = uStack_200;
        local_100 = local_208;
        uStack_e8 = uStack_1f0;
        uStack_f0 = local_1f8;
        uStack_138 = uStack_240;
        local_140 = local_248;
        puStack_128 = puStack_230;
        uStack_130 = local_238;
        local_120 = local_228;
        uStack_108 = uStack_210;
        uStack_110 = local_218;
        uStack_b8 = local_60;
        local_c0 = uStack_68;
        uStack_b0 = uStack_58;
        local_e0 = CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,local_1e8));
        uStack_d8 = local_80;
        uStack_c8 = uStack_70;
        uStack_d0 = uStack_78;
        local_1b0 = param_1;
        puStack_a8 = param_1;
        local_a0 = puVar6;
        if (param_1 == &DAT_1009d2420) {
          if (DAT_100aa2690 != -1) {
            _swift_once(&DAT_100aa2690,FUN_1004f664c);
          }
          uStack_198 = 0xc000000000000000;
          local_1a0 = 0;
          local_190 = DAT_100b39640;
          _swift_retain();
          puVar5 = &local_140;
          FUN_100517a2c();
          uVar2 = local_190;
          uVar1 = uStack_198;
          uVar7 = local_1a0;
          puStack_230 = &DAT_1009d2420;
          FUN_1004f9c30();
          local_248 = uVar7;
          uStack_240 = uVar1;
          local_238 = uVar2;
          local_228 = puVar5;
          FUN_100008184(uVar7,uVar1);
          _swift_retain(uVar2);
          FUN_100006cdc(uVar7,uVar1);
          _swift_release(uVar2);
          uStack_220 = 1;
          _swift_beginAccess(unaff_x20 + 0x20,auStack_260,0x21,0);
          FUN_1004f99e8(&local_248,unaff_x20 + 0x20);
          _swift_endAccess(auStack_260);
        }
        else {
          pcVar8 = *(code **)(puVar6 + 0x10);
          puVar5 = &local_1a0;
          local_188 = param_1;
          puStack_180 = puVar6;
          FUN_1000efc08(puVar5);
          (*pcVar8)(puVar5,param_1,puVar6);
          puVar3 = puStack_180;
          puVar4 = local_188;
          FUN_1000ce034(&local_1a0,local_188);
          (**(code **)(puVar6 + 0x40))(&local_140,&DAT_1009d1a08,&PTR_PTR_1009d1a30,puVar4,puVar3);
          FUN_1000b142c(&local_1a0,&local_248);
          uStack_220 = 1;
          _swift_beginAccess(unaff_x20 + 0x20,auStack_260,0x21,0);
          FUN_1004f99e8(&local_248,unaff_x20 + 0x20);
          _swift_endAccess(auStack_260);
          FUN_10003f094(&local_1a0);
        }
        puVar5 = &local_140;
        FUN_1004f9bf4();
        FUN_10054e678();
        if ((param_3 & 1) == 0) {
          FUN_1004f9b10();
          _swift_allocError(&DAT_1009d1c98,puVar5,0,0);
          *(undefined1 *)puVar5 = 0;
          _swift_willThrow();
        }
        FUN_1004f9bc0(&local_140);
      }
    }
  }
  return;
}

