// rea decompile_all
// name: FUN_1005d3d30
// address: 0x1005d3d30
// body: available
// range: 0x1005d3d30-0x1005d4063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001005d3e34) */

undefined * FUN_1005d3d30(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *local_170;
  undefined8 uStack_168;
  code *local_160;
  undefined *puStack_158;
  code *local_150;
  undefined *puStack_148;
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
  undefined *local_70;
  ulong uStack_68;
  
  uStack_68 = 0xf000000000000000;
  local_70 = (undefined *)0x0;
  puVar2 = &DAT_1009d8cd8;
  _swift_allocObject(&DAT_1009d8cd8,0x18,7);
  puVar11 = (undefined8 *)(puVar2 + 0x10);
  *puVar11 = 0;
  _swift_retain();
  pcVar1 = FUN_1005d44c4;
  FUN_1005d14dc(FUN_1005d44c4,puVar2);
  _swift_release(puVar2);
  if (pcVar1 == (code *)0x0) {
    pcVar10 = (code *)0x0;
    puVar9 = (undefined *)0x0;
  }
  else {
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
    puStack_148 = (undefined *)param_1[5];
    local_150 = (code *)param_1[4];
    uStack_138 = param_1[7];
    uStack_140 = param_1[6];
    uVar3 = 0;
    __s10Foundation11JSONEncoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONEncoderCACycfc();
    uVar4 = uVar3;
    FUN_1005d1150();
    puVar9 = &DAT_1009da430;
    ppuVar5 = &local_170;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar5,&DAT_1009da430,uVar4);
    _swift_release(uVar3);
    ppuVar6 = ppuVar5;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(ppuVar5,puVar9);
    FUN_100006cdc(ppuVar5,puVar9);
    puVar9 = &DAT_1009d8f08;
    _swift_allocObject(&DAT_1009d8f08,0x18,7);
    *(undefined ***)(puVar9 + 0x10) = &local_70;
    puVar7 = &DAT_1009d8f30;
    _swift_allocObject(&DAT_1009d8f30,0x20,7);
    pcVar10 = FUN_1005d44dc;
    *(code **)(puVar7 + 0x10) = FUN_1005d44dc;
    *(undefined **)(puVar7 + 0x18) = puVar9;
    local_150 = FUN_100102840;
    local_170 = PTR___NSConcreteStackBlock_100995490;
    uStack_168 = 0x42000000;
    local_160 = FUN_1005d0ec0;
    puStack_158 = &DAT_1009d8f48;
    puStack_148 = puVar7;
    aBlock = __Block_copy(&local_170);
    puVar12 = puStack_148;
    _swift_retain(puVar7);
    _swift_release(puVar12);
    _objc_msgSend((ID)pcVar1,"receiveSync:reply:",ppuVar6,aBlock);
    _swift_unknownObjectRelease(pcVar1);
    __Block_release(aBlock);
    puVar12 = puVar7;
    _swift_isEscapingClosureAtFileLocation(puVar7,"",0xad,0xf3,0x33,1);
    _swift_release(puVar7);
    if (((ulong)puVar12 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d4064);
      (*pcVar1)();
    }
  }
  puVar8 = puVar11;
  _swift_beginAccess(puVar11,&local_170,0,0);
  puVar7 = local_70;
  puVar12 = (undefined *)*puVar11;
  if (puVar12 == (undefined *)0x0) {
    if (uStack_68 >> 0x3c < 0xf) {
      FUN_100008184(local_70,uStack_68);
      _swift_release(puVar2);
    }
    else {
      FUN_1005d42c0();
      puVar7 = &DAT_1009d90b8;
      _swift_allocError(&DAT_1009d90b8,puVar8,0,0);
      *(undefined1 *)puVar8 = 1;
      _swift_release(puVar2);
    }
  }
  else {
    _swift_errorRetain(puVar12);
    _swift_release(puVar2);
    puVar7 = puVar12;
  }
  FUN_100006cc8(local_70,uStack_68);
  FUN_10007ed2c(pcVar10,puVar9);
  return puVar7;
}

