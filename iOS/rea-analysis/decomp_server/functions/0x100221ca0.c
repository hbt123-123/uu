// rea decompile_all
// name: FUN_100221ca0
// address: 0x100221ca0
// body: available
// range: 0x100221ca0-0x100221e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100221ca0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 local_70 [2];
  undefined8 local_60;
  ulong uStack_58;
  
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar14 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_60 = param_1;
  uStack_58 = param_2;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar13);
  FUN_10021e96c();
  uVar11 = 0;
  lVar5 = lVar13;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (lVar13,0,PTR___sSSN_1009957f8,lVar4);
  (**(code **)(lVar14 + 8))(lVar13,lVar3);
  if (uVar11 >> 0x3c < 0xf) {
    __s10Foundation13__DataStorageCMa();
    _swift_allocObject();
    uVar6 = 0x10;
    __s10Foundation13__DataStorageC6lengthACSi_tcfc();
    uStack_58 = uVar6 | 0x4000000000000000;
    local_60 = 0x1000000000;
    FUN_100008184(lVar5,uVar11);
    FUN_100221804(&local_60,lVar5,uVar11);
    FUN_100006cc8(lVar5,uVar11);
    uVar6 = uStack_58;
    uVar1 = local_60;
    uVar7 = local_60;
    FUN_1002210fc(local_60,uStack_58);
    puVar8 = &DAT_100a7e470;
    local_70[0] = uVar7;
    FUN_100004bb4(&DAT_100a7e470,&DAT_1008134c8);
    puVar9 = &DAT_100a7e478;
    FUN_10003f840(&DAT_100a7e478,&DAT_100a7e470,&DAT_1008134c8,PTR___sSayxGSKsMc_100995888);
    uVar10 = 0;
    uVar12 = 0xe000000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar8,puVar9);
    FUN_100006cc8(lVar5,uVar11);
    _swift_bridgeObjectRelease(uVar7);
    FUN_100006cdc(uVar1,uVar6);
    auVar15._8_8_ = uVar12;
    auVar15._0_8_ = uVar10;
    return auVar15;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100221e60);
  (*pcVar2)();
}

