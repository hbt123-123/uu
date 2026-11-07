// rea decompile_all
// name: FUN_1000a6560
// address: 0x1000a6560
// body: available
// range: 0x1000a6560-0x1000a687b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000a6560(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *unaff_x20;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  
  puVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar16 = unaff_x20[3];
  lVar18 = *(long *)(lVar16 + 0x10);
  if (lVar18 == 0) {
    lVar18 = 0;
    lVar16 = -0x2000000000000000;
  }
  else {
    FUN_1000798d0(0,lVar18,0);
    lVar16 = lVar16 + 0x30;
    do {
      uVar2 = *(undefined8 *)(lVar16 + -8);
      uVar3 = *(undefined8 *)(lVar16 + 8);
      uVar12 = *(undefined8 *)(lVar16 + 0x10);
      uVar4 = *(undefined8 *)(lVar16 + 0x18);
      uVar14 = *(undefined8 *)(lVar16 + 0x20);
      uVar5 = *(undefined8 *)(lVar16 + 0x28);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      uVar13 = uVar4;
      FUN_1000aa134(uVar12,uVar4,uVar14,uVar5);
      uVar9 = param_1;
      FUN_1000a5bf0();
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      FUN_1000aa14c(uVar12,uVar4,uVar14,uVar5);
      uVar1 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        FUN_1000798d0(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = uVar9;
      *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = uVar13;
      lVar16 = lVar16 + 0x40;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    puVar10 = &DAT_100103ed8;
    FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
    puVar11 = &DAT_100103ee0;
    FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
    uVar12 = 0;
    uVar14 = 0xe000000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar10,puVar11);
    _swift_release(puVar8);
    lVar16 = *unaff_x20;
    lVar6 = unaff_x20[1];
    lVar17 = lVar6;
    lVar18 = lVar16;
    if ((char)unaff_x20[2] == '\0') {
      FUN_1000a4860(lVar16,lVar6,0);
    }
    else if ((char)unaff_x20[2] == '\x01') {
      FUN_1000a4860(lVar16,lVar6,1);
      _swift_bridgeObjectRetain(lVar6);
      __sSS6appendyySSF(0x6d6d6f6362755320,0xec00000073646e61);
      FUN_1000a48a8(lVar16,lVar6,1);
    }
    else {
      lVar15 = -0x14ffffffff8c9b92;
      lVar7 = 0x616d6d6f63627553;
      if (lVar16 != 1 || lVar6 != 0) {
        lVar15 = -0x1900000000000000;
        lVar7 = 0x736e6f6974704f;
      }
      lVar17 = -0x16ffffffffffff8d;
      lVar18 = 0x746e656d75677241;
      if (lVar16 != 0 || lVar6 != 0) {
        lVar17 = lVar15;
        lVar18 = lVar7;
      }
    }
    lVar16 = lVar17;
    __sSS10uppercasedSSyF();
    _swift_bridgeObjectRelease(lVar17);
    __sSS6appendyySSF(0xa3a,0xe200000000000000);
    _swift_bridgeObjectRetain(lVar16);
    __sSS6appendyySSF(uVar12,uVar14);
    _swift_bridgeObjectRelease(uVar14);
    _swift_bridgeObjectRelease(lVar16);
  }
  auVar19._8_8_ = lVar16;
  auVar19._0_8_ = lVar18;
  return auVar19;
}

