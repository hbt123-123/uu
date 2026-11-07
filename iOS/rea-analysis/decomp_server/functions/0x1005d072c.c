// rea decompile_all
// name: FUN_1005d072c
// address: 0x1005d072c
// body: available
// range: 0x1005d072c-0x1005d0aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001005d09a8) */

void FUN_1005d072c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  void *pvVar6;
  ID *pIVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ID IVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined *local_180;
  undefined8 uStack_178;
  code *local_170;
  undefined *puStack_168;
  code *local_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
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
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  ID local_88 [3];
  
  (**(code **)(param_4 + 8))(param_3,param_4);
  _swift_bridgeObjectRetain(param_2);
  lVar4 = param_3;
  FUN_1005d129c(param_3,param_2);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_2);
  uVar12 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(lVar4 + 0x40);
  _swift_retain(lVar4);
  lVar14 = 0;
  while( true ) {
    while (uVar16 != 0) {
      uVar1 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = *(long *)(*(long *)(lVar4 + 0x38) +
                        (lVar14 << 9 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 3));
      IVar13 = *(ID *)(lVar15 + 0x10);
      puVar5 = &DAT_1009d8aa8;
      _swift_allocObject(&DAT_1009d8aa8,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = 0;
      *(undefined8 *)(puVar5 + 0x18) = 0;
      local_160 = FUN_1005d1130;
      local_180 = PTR___NSConcreteStackBlock_100995490;
      uStack_178 = 0x42000000;
      local_170 = FUN_1000a8c3c;
      puStack_168 = &DAT_1009d8ac0;
      puStack_158 = puVar5;
      pvVar6 = __Block_copy(&local_180);
      puVar5 = puStack_158;
      _swift_retain(lVar15);
      _swift_release(puVar5);
      IVar13 = _objc_msgSend(IVar13,"remoteObjectProxyWithErrorHandler:",pvVar6);
      __Block_release(pvVar6);
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_180,IVar13);
      _swift_unknownObjectRelease(IVar13);
      puVar5 = &DAT_100aadc58;
      FUN_100004bb4(&DAT_100aadc58,&DAT_10083f200);
      pIVar7 = local_88;
      _swift_dynamicCast(pIVar7,&local_180,PTR___sypN_100995e88 + 8,puVar5,6);
      IVar13 = local_88[0];
      if (((ulong)pIVar7 & 1) == 0) {
        _swift_release(lVar15);
      }
      else {
        uStack_b8 = param_1[0x19];
        local_c0 = param_1[0x18];
        uStack_a8 = param_1[0x1b];
        uStack_b0 = param_1[0x1a];
        uStack_98 = param_1[0x1d];
        local_a0 = param_1[0x1c];
        local_90 = *(undefined1 *)(param_1 + 0x1e);
        uStack_f8 = param_1[0x11];
        local_100 = param_1[0x10];
        uStack_e8 = param_1[0x13];
        uStack_f0 = param_1[0x12];
        uStack_d8 = param_1[0x15];
        local_e0 = param_1[0x14];
        uStack_c8 = param_1[0x17];
        uStack_d0 = param_1[0x16];
        uStack_138 = param_1[9];
        local_140 = param_1[8];
        uStack_128 = param_1[0xb];
        uStack_130 = param_1[10];
        uStack_118 = param_1[0xd];
        local_120 = param_1[0xc];
        uStack_108 = param_1[0xf];
        uStack_110 = param_1[0xe];
        uStack_178 = param_1[1];
        local_180 = (undefined *)*param_1;
        puStack_168 = (undefined *)param_1[3];
        local_170 = (code *)param_1[2];
        puStack_158 = (undefined *)param_1[5];
        local_160 = (code *)param_1[4];
        uStack_148 = param_1[7];
        uStack_150 = param_1[6];
        uVar8 = 0;
        __s10Foundation11JSONEncoderCMa();
        _swift_allocObject();
        __s10Foundation11JSONEncoderCACycfc();
        uVar9 = uVar8;
        FUN_1005d1150();
        ppuVar10 = &local_180;
        puVar5 = &DAT_1009da430;
        __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar10,&DAT_1009da430,uVar9);
        _swift_release(uVar8);
        ppuVar11 = ppuVar10;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(ppuVar10,puVar5);
        FUN_100006cdc(ppuVar10,puVar5);
        local_160 = FUN_100008290;
        puStack_158 = (undefined *)0x0;
        local_180 = PTR___NSConcreteStackBlock_100995490;
        uStack_178 = 0x42000000;
        local_170 = FUN_1005d0aa8;
        puStack_168 = &DAT_1009d8ae8;
        pvVar6 = __Block_copy(&local_180);
        _objc_msgSend(IVar13,"receiveAsync:reply:",ppuVar11,pvVar6);
        _swift_unknownObjectRelease(IVar13);
        _swift_release(lVar15);
        __Block_release(pvVar6);
      }
    }
    bVar3 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar3) break;
    if ((long)(uVar12 + 0x3f >> 6) <= lVar14) {
      _swift_release_n(lVar4,2);
      return;
    }
    uVar16 = ((ulong *)(lVar4 + 0x40))[lVar14];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005d0aa8);
  (*pcVar2)();
}

