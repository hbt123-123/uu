// rea decompile_all
// name: FUN_1005d28f0
// address: 0x1005d28f0
// body: available
// range: 0x1005d28f0-0x1005d2b37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005d29b4 to 0x10007ed2c FUN_10007ed2c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001005d2a5c) */

void FUN_1005d28f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  ID self;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  void *aBlock;
  undefined *local_170;
  undefined8 uStack_168;
  code *local_160;
  undefined *puStack_158;
  code *local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  if (param_5 == 0) {
    self = 0;
    FUN_1005d14b8(0,0);
    if (self != 0) {
      uStack_a8 = param_1[0x19];
      local_b0 = param_1[0x18];
      uStack_98 = param_1[0x1b];
      uStack_a0 = param_1[0x1a];
      uStack_88 = param_1[0x1d];
      local_90 = param_1[0x1c];
      local_80 = *(undefined1 *)(param_1 + 0x1e);
      uStack_e8 = param_1[0x11];
      local_f0 = param_1[0x10];
      uStack_d8 = param_1[0x13];
      uStack_e0 = param_1[0x12];
      uStack_c8 = param_1[0x15];
      local_d0 = param_1[0x14];
      uStack_b8 = param_1[0x17];
      uStack_c0 = param_1[0x16];
      uStack_128 = param_1[9];
      local_130 = param_1[8];
      uStack_118 = param_1[0xb];
      uStack_120 = param_1[10];
      uStack_108 = param_1[0xd];
      local_110 = param_1[0xc];
      uStack_f8 = param_1[0xf];
      uStack_100 = param_1[0xe];
      uStack_168 = param_1[1];
      local_170 = (undefined *)*param_1;
      puStack_158 = (undefined *)param_1[3];
      local_160 = (code *)param_1[2];
      uStack_148 = param_1[5];
      local_150 = (code *)param_1[4];
      uStack_138 = param_1[7];
      uStack_140 = param_1[6];
      uVar2 = 0;
      __s10Foundation11JSONEncoderCMa();
      _swift_allocObject();
      __s10Foundation11JSONEncoderCACycfc();
      uVar3 = uVar2;
      FUN_1005d1150();
      puVar1 = &DAT_1009da430;
      ppuVar4 = &local_170;
      __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar4,&DAT_1009da430,uVar3);
      _swift_release(uVar2);
      ppuVar5 = ppuVar4;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(ppuVar4,puVar1);
      FUN_100006cdc(ppuVar4,puVar1);
      local_150 = FUN_100008290;
      uStack_148 = 0;
      local_170 = PTR___NSConcreteStackBlock_100995490;
      uStack_168 = 0x42000000;
      local_160 = FUN_1005d0aa8;
      puStack_158 = &DAT_1009d8d68;
      aBlock = __Block_copy(&local_170);
      _objc_msgSend(self,"receiveAsync:reply:",ppuVar5,aBlock);
      _swift_unknownObjectRelease(self);
      __Block_release(aBlock);
    }
    return;
  }
  puVar1 = &DAT_1009d8da0;
  _swift_allocObject(&DAT_1009d8da0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_9;
  *(long *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  FUN_10004090c(param_5,param_6);
  _swift_retain(param_6);
  FUN_1005d2cf8(param_1,param_3,param_4,FUN_1005d4394,puVar1);
  _swift_release(puVar1);
  FUN_10007ed2c(param_5,param_6);
  return;
}

