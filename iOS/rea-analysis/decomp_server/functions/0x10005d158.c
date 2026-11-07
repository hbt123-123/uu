// rea decompile_all
// name: FUN_10005d158
// address: 0x10005d158
// body: available
// range: 0x10005d158-0x10005d347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005d158(char *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,undefined *param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_11b;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_9b;
  undefined1 auStack_88 [40];
  
  cVar2 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0xb8) == param_3) {
      _swift_beginAccess(param_2 + 0x70,&local_110,0x21,0);
      FUN_10004b9a4(&local_190,param_4);
      _swift_endAccess(&local_110);
      uStack_c8 = uStack_148;
      local_d0 = local_150;
      uStack_b8 = uStack_138;
      uStack_c0 = uStack_140;
      local_b0 = local_130;
      uStack_9b = uStack_11b;
      uStack_108 = uStack_188;
      local_110 = local_190;
      uStack_f8 = uStack_178;
      uStack_100 = uStack_180;
      uStack_e8 = uStack_168;
      local_f0 = local_170;
      uStack_d8 = uStack_158;
      uStack_e0 = uStack_160;
      FUN_100040bb4(&local_110,&DAT_100a761f8,&DAT_10080a998);
      pcVar6 = *(code **)(param_2 + 0x78);
      if (pcVar6 == (code *)0x0) {
        uVar1 = *(undefined4 *)(param_5 + 0x60);
      }
      else {
        uVar5 = *(undefined8 *)(param_2 + 0x80);
        uVar1 = *(undefined4 *)(param_5 + 0x60);
        _swift_retain(uVar5);
        (*pcVar6)(uVar1,0,2);
        FUN_10007ed2c(pcVar6,uVar5);
      }
      if (SCARRY8(param_7,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10005d348);
        (*pcVar6)();
      }
      if (cVar2 == '\x02') {
        puVar3 = &DAT_100a759b8;
        FUN_100004bb4(&DAT_100a759b8,&DAT_10080a9a0);
        _swift_initStackObject();
        *(undefined8 *)(puVar3 + 0x18) = 2;
        *(undefined8 *)(puVar3 + 0x10) = 1;
        *(undefined4 *)(puVar3 + 0x20) = uVar1;
        _swift_bridgeObjectRetain(param_8);
        puVar4 = puVar3;
        FUN_100075338(puVar3,param_8);
        _swift_setDeallocating(puVar3);
        param_8 = puVar4;
      }
      else {
        _swift_bridgeObjectRetain(param_8);
      }
      FUN_10005cd04(param_6,param_7 + 1,param_8,param_3,param_9,param_10);
      _swift_release(param_2);
      _swift_bridgeObjectRelease(param_8);
    }
    else {
      _swift_release(param_2);
    }
  }
  return;
}

