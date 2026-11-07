// rea decompile_all
// name: FUN_10018ab14
// address: 0x10018ab14
// body: available
// range: 0x10018ab14-0x10018aea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10018ab14(void)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  ID IVar8;
  ulong uVar9;
  code *pcVar10;
  long unaff_x20;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_c0 [16];
  long alStack_b0 [2];
  undefined1 auStack_a0 [8];
  long local_98;
  ID local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  long lStack_68;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  puVar12 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = (long)puVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar13 - extraout_x12_00;
  IVar8 = *(ID *)(unaff_x20 + 0x20);
  IVar3 = _objc_msgSend(IVar8,"changeCount");
  if (IVar3 == *(ID *)(unaff_x20 + 0x28)) {
    uVar4 = 0;
  }
  else if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    *(undefined1 *)(unaff_x20 + 0x30) = 0;
    IVar8 = _objc_msgSend(IVar8,"changeCount");
    *(ID *)(unaff_x20 + 0x28) = IVar8;
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_10018aea4,0,0xd0000000000000a2,0x8000000100893bb0,0xd00000000000001d,
                  0x8000000100893ee0,0x8f,7);
    uVar4 = 0;
  }
  else {
    FUN_100189010();
    puVar1 = PTR___sSSN_1009957f8;
    if (IVar3 != 0) {
      uVar11 = *(ulong *)(IVar3 + 0x10);
      local_98 = lVar14;
      local_90 = IVar8;
      if (uVar11 != 0) {
        uVar9 = 0;
        do {
          if (*(ulong *)(IVar3 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10018aea4);
            (*pcVar10)();
          }
          lVar7 = IVar3 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar15 + 0x48) * uVar9;
          puVar5 = puVar12;
          (**(code **)(lVar15 + 0x10))(puVar12,lVar7,lVar2);
          __s10Foundation3URLV14absoluteStringSSvg();
          local_80 = 0x746f6d657275752e;
          local_78 = 0xea00000000005f65;
          local_70 = puVar5;
          lStack_68 = lVar7;
          FUN_10009ff0c();
          puVar6 = &local_80;
          __sSy10FoundationE8containsySbqd__SyRd__lF(puVar6,puVar1,puVar1,puVar5,puVar5);
          _swift_bridgeObjectRelease(lVar7);
          if (((ulong)puVar6 & 1) != 0) {
            _swift_bridgeObjectRelease(IVar3);
            pcVar10 = *(code **)(lVar15 + 0x20);
            (*pcVar10)(lVar13,puVar12,lVar2);
            lVar7 = local_98;
            (*pcVar10)(local_98,lVar13,lVar2);
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(long *)(lVar14 + -0x10) = lVar7;
            FUN_1003fb48c(FUN_10018b650,lVar14 + -0x20,0xd0000000000000a2,0x8000000100893bb0,
                          0xd00000000000001d,0x8000000100893ee0,0x94,7);
            IVar8 = _objc_msgSend(local_90,"changeCount");
            *(ID *)(unaff_x20 + 0x28) = IVar8;
            (**(code **)(lVar15 + 8))(lVar7,lVar2);
            return 0;
          }
          uVar9 = uVar9 + 1;
          (**(code **)(lVar15 + 8))(puVar12,lVar2);
        } while (uVar11 != uVar9);
      }
      _swift_bridgeObjectRelease(IVar3);
      IVar8 = local_90;
    }
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_10018b648,unaff_x20,0xd0000000000000a2,0x8000000100893bb0,0xd00000000000001d,
                  0x8000000100893ee0,0x99,7);
    IVar8 = _objc_msgSend(IVar8,"changeCount");
    *(ID *)(unaff_x20 + 0x28) = IVar8;
    uVar4 = 1;
  }
  return uVar4;
}

