// rea decompile_all
// name: FUN_1005cfc70
// address: 0x1005cfc70
// body: available
// range: 0x1005cfc70-0x1005d02e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001005d01bc) */
/* WARNING: Removing unreachable block (ram,0x0001005d0144) */
/* WARNING: Removing unreachable block (ram,0x0001005d0218) */

undefined1  [16] FUN_1005cfc70(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *self;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar17;
  long unaff_x21;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_150 [8];
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 *local_138;
  long local_130;
  undefined1 *local_128;
  long local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [88];
  
  lVar8 = 0;
  __s9CryptoKit3AESO3GCMO9SealedBoxVMa();
  local_e0 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e0 + 0x40));
  puVar14 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined1 *)0x0;
  __s9CryptoKit3AESO3GCMO5NonceVMa();
  lVar19 = *(long *)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  puVar20 = puVar14 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = (long)puVar20 - extraout_x12;
  lVar10 = 0;
  __s9CryptoKit12SymmetricKeyVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  puVar17 = (undefined1 *)(lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar1 = (uint)(param_2 >> 0x20);
  uVar15 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar15 == 0) {
      if (0x1c < (param_2 >> 0x30 & 0xff)) {
LAB_1005cfda0:
        local_130 = lVar8;
        local_128 = puVar20;
        local_120 = lVar19;
        local_118 = puVar9;
        local_108 = extraout_x12_00;
        local_100 = lVar10;
        local_f0 = lVar18;
        if (DAT_100aad818 != -1) {
          _swift_once(&DAT_100aad818,FUN_1005cf030);
        }
        local_c8 = DAT_100aad820;
        uStack_c0 = DAT_100aad828;
        FUN_100008184();
        __s9CryptoKit12SymmetricKeyV4dataACx_tc10Foundation15ContiguousBytesRzlufC
                  (puVar17,&local_c8,PTR___s10Foundation4DataVN_1009961e8,
                   PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_1009961d8);
        FUN_100008184(param_1,param_2);
        FUN_10004cd9c(&local_c8,0xc,param_1,param_2);
        uVar12 = uStack_c0;
        puVar20 = local_c8;
        FUN_100008184(param_1,param_2);
        FUN_100343c58(&local_c8,0xc,param_1,param_2);
        uVar6 = uStack_c0;
        puVar4 = local_c8;
        FUN_100008184(local_c8,uStack_c0);
        FUN_1005cf248(&local_c8,0x10,puVar4,uVar6);
        local_110 = local_c8;
        local_e8 = uStack_c0;
        FUN_100008184(puVar4,uVar6);
        FUN_1005cf390(&local_c8,0x10,puVar4,uVar6);
        puVar5 = local_c8;
        local_f8 = uStack_c0;
        puVar9 = puVar20;
        local_c8 = puVar20;
        uStack_c0 = uVar12;
        FUN_100008184(puVar20,uVar12);
        FUN_1005d02e4();
        lVar8 = local_f0;
        __s9CryptoKit3AESO3GCMO5NonceV4dataAGx_tKc10Foundation12DataProtocolRzlufC
                  (local_f0,&local_c8,PTR___s10Foundation4DataVN_1009961e8,puVar9);
        if (unaff_x21 == 0) {
          local_148 = puVar20;
          local_140 = uVar12;
          local_138 = puVar17;
          (**(code **)(local_120 + 0x10))(local_128,lVar8,local_118);
          uVar12 = local_e8;
          puVar3 = local_110;
          uStack_c0 = local_f8;
          local_d8 = local_110;
          uStack_d0 = local_e8;
          local_c8 = puVar5;
          FUN_100008184(puVar5,local_f8);
          FUN_100008184(puVar3,uVar12);
          __s9CryptoKit3AESO3GCMO9SealedBoxV5nonce10ciphertext3tagAgE5NonceV_xq_tKc10Foundation12DataProtocolRzAmNR_r0_lufC
                    (puVar14,local_128,&local_c8,&local_d8,PTR___s10Foundation4DataVN_1009961e8,
                     PTR___s10Foundation4DataVN_1009961e8,puVar9,puVar9);
          uVar12 = local_e8;
          puVar20 = puVar14;
          puVar9 = local_138;
          __s9CryptoKit3AESO3GCMO4open_5using10Foundation4DataVAE9SealedBoxV_AA12SymmetricKeyVtKFZ
                    (puVar14,local_138);
          puVar17 = local_148;
          FUN_100006cdc(puVar3,uVar12);
          FUN_100006cdc(puVar5,local_f8);
          FUN_100006cdc(puVar17,local_140);
          FUN_100006cdc(puVar4,uVar6);
          (**(code **)(local_e0 + 8))(puVar14,local_130);
          (**(code **)(local_120 + 8))(local_f0,local_118);
          (**(code **)(local_108 + 8))(local_138,local_100);
        }
        else {
          (**(code **)(local_108 + 8))(puVar17,local_100);
          FUN_100006cdc(puVar4,uVar6);
          FUN_100006cdc(puVar20,uVar12);
          FUN_100006cdc(puVar5,local_f8);
          FUN_100006cdc(local_110,local_e8);
          puVar20 = puVar5;
        }
        goto LAB_1005d0078;
      }
    }
    else {
      iVar16 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar16,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1005d02e4);
        (*pcVar7)();
      }
      if (0x1c < iVar16 - (int)param_1) goto LAB_1005cfda0;
    }
  }
  else if (uVar15 == 2) {
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1005d02e0);
      (*pcVar7)();
    }
    if (0x1c < *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) goto LAB_1005cfda0;
  }
  puVar11 = &DAT_100aada60;
  FUN_100004bb4(&DAT_100aada60,&DAT_10083f058);
  puVar14 = auStack_b8;
  _swift_initStackObject();
  *(undefined8 *)(puVar11 + 0x18) = 2;
  *(undefined8 *)(puVar11 + 0x10) = 1;
  uVar12 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(puVar11 + 0x20) = uVar12;
  puVar2 = PTR___sSSN_1009957f8;
  *(undefined **)(puVar11 + 0x48) = PTR___sSSN_1009957f8;
  *(undefined1 **)(puVar11 + 0x28) = puVar14;
  *(undefined8 *)(puVar11 + 0x30) = 0xd00000000000001b;
  *(undefined8 *)(puVar11 + 0x38) = 0x80000001008bdcd0;
  puVar13 = puVar11;
  FUN_1005d9314(puVar11);
  _swift_setDeallocating(puVar11);
  FUN_100040bb4(puVar11 + 0x20,&DAT_100aada68,&DAT_10083f060);
  self = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  uVar12 = 0x72632e6370787575;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x72632e6370787575,0xec0000006f747079);
  puVar11 = puVar13;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar13,puVar2,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  _swift_bridgeObjectRelease(puVar13);
  _objc_msgSend((ID)self,"initWithDomain:code:userInfo:",uVar12,0xfffffffffffffffe,puVar11);
  _swift_willThrow(0);
LAB_1005d0078:
  auVar21._8_8_ = puVar9;
  auVar21._0_8_ = puVar20;
  return auVar21;
}

