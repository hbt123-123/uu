// rea decompile_all
// name: FUN_1005cf8ec
// address: 0x1005cf8ec
// body: available
// range: 0x1005cf8ec-0x1005cfc6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cf8ec(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 **ppuVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long extraout_x8_02;
  long unaff_x21;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_d0 [16];
  long local_c0;
  long lStack_b8;
  undefined1 *local_a0;
  long lStack_98;
  undefined *local_88;
  undefined *local_80;
  undefined1 *local_70;
  long lStack_68;
  
  lVar4 = 0;
  __s9CryptoKit3AESO3GCMO5NonceVMa();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  puVar8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100aada90;
  FUN_100004bb4(&DAT_100aada90,&DAT_10083f078);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)puVar8 - extraout_x8_00;
  lVar6 = 0;
  __s9CryptoKit3AESO3GCMO9SealedBoxVMa();
  local_c0 = *(long *)(lVar6 + -8);
  lStack_b8 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar13 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s9CryptoKit12SymmetricKeyVMa();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100aad818 != -1) {
    _swift_once(&DAT_100aad818,FUN_1005cf030);
  }
  local_a0 = DAT_100aad820;
  lStack_98 = DAT_100aad828;
  FUN_100008184();
  puVar5 = PTR___s10Foundation4DataVN_1009961e8;
  __s9CryptoKit12SymmetricKeyV4dataACx_tc10Foundation15ContiguousBytesRzlufC
            (lVar12,&local_a0,PTR___s10Foundation4DataVN_1009961e8,
             PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_1009961d8);
  lVar7 = lVar15;
  local_a0 = param_1;
  lStack_98 = param_2;
  (**(code **)(lVar14 + 0x38))(lVar15,1,1,lVar4);
  FUN_1005d02e4();
  __s9CryptoKit3AESO3GCMO4seal_5using5nonceAE9SealedBoxVx_AA12SymmetricKeyVAE5NonceVSgtK10Foundation12DataProtocolRzlFZ
            (lVar13,&local_a0,lVar12,lVar15,puVar5,lVar7);
  if (unaff_x21 == 0) {
    FUN_100040bb4(lVar15,&DAT_100aada90,&DAT_10083f078);
    __s9CryptoKit3AESO3GCMO9SealedBoxV5nonceAE5NonceVvg(puVar8);
    __s9CryptoKit3AESO3GCMO5NonceV15withUnsafeBytesyxxSWKXEKlF(&local_a0,FUN_1005cf180,0,puVar5);
    (**(code **)(lVar14 + 8))();
    lVar14 = lStack_98;
    puVar3 = local_a0;
    __s9CryptoKit3AESO3GCMO9SealedBoxV10ciphertext10Foundation4DataVvg();
    puVar9 = puVar8;
    lVar15 = lVar4;
    __s9CryptoKit3AESO3GCMO9SealedBoxV3tag10Foundation4DataVvg();
    local_88 = puVar5;
    local_80 = PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_1009961d8;
    ppuVar10 = &local_a0;
    local_a0 = puVar9;
    lStack_98 = lVar15;
    local_70 = puVar8;
    lStack_68 = lVar4;
    FUN_10003f030(ppuVar10,puVar5);
    puVar1 = *ppuVar10;
    puVar2 = ppuVar10[1];
    FUN_100008184(puVar8,lVar4);
    FUN_100008184(puVar9,lVar15);
    FUN_1001f7dd8(puVar1,puVar2,&local_70);
    FUN_100006cdc(puVar9,lVar15);
    FUN_100006cdc(puVar8,lVar4);
    FUN_10003f094(&local_a0);
    lStack_98 = lStack_68;
    local_a0 = local_70;
    local_70 = puVar3;
    lStack_68 = lVar14;
    local_88 = PTR___s10Foundation4DataVN_1009961e8;
    local_80 = PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_1009961d8;
    ppuVar10 = &local_a0;
    FUN_10003f030();
    puVar8 = *ppuVar10;
    puVar1 = ppuVar10[1];
    FUN_100008184(puVar3,lVar14);
    FUN_1001f7dd8(puVar8,puVar1,&local_70);
    FUN_100006cdc(puVar3,lVar14);
    (**(code **)(local_c0 + 8))(lVar13,lStack_b8);
    (**(code **)(lVar11 + 8))(lVar12,lVar6);
    FUN_10003f094(&local_a0);
  }
  else {
    FUN_100040bb4(lVar15,&DAT_100aada90,&DAT_10083f078);
    (**(code **)(lVar11 + 8))(lVar12,lVar6);
  }
  return;
}

