// rea decompile_all
// name: FUN_10001e990
// address: 0x10001e990
// body: available
// range: 0x10001e990-0x10001ed57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10001e990(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 auStack_b0 [16];
  undefined4 local_a0;
  undefined4 uStack_9c;
  byte local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint uStack_8c;
  undefined1 local_78 [24];
  
  uVar12 = (undefined4)param_1;
  uVar8 = (undefined4)param_2;
  uVar2 = param_2 >> 0x20;
  uStack_8c = uVar8;
  if ((*(char *)(unaff_x20 + 0x99) == '\x01') &&
     (lVar11 = *(long *)(unaff_x20 + 0x90), *(long *)(lVar11 + 0x10) != 0)) {
    puVar7 = local_78;
    _swift_beginAccess(unaff_x20 + 0x80,puVar7,0x20,0);
    lVar10 = *(long *)(unaff_x20 + 0x80);
    if ((*(long *)(lVar10 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar7 & 1) == 0)) {
      _swift_endAccess(local_78);
      if (((param_2 >> 0x20 & 1) == 0) &&
         (uVar5 = param_2, thunk_FUN_100152fd0(param_2,lVar11), (uVar5 & 1) != 0)) {
        _swift_bridgeObjectRetain(lVar10);
        uVar5 = param_2;
        FUN_1000446bc(param_2,lVar10);
        _swift_bridgeObjectRelease(lVar10);
        if ((uVar5 & 1) == 0) {
          uVar13 = 0;
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)(uVar13);
          local_90 = uVar12;
          FUN_1003fb48c(FUN_10003fae8,&local_a0,0xd0000000000000a9,0x8000000100877660,
                        0xd000000000000022,0x8000000100879250,0x97f,0);
          bVar4 = false;
          goto LAB_10001ec98;
        }
      }
      lVar10 = *(long *)(unaff_x20 + 0x90);
      lVar11 = lVar10;
      _swift_bridgeObjectRetain();
      FUN_100045da4();
      _swift_bridgeObjectRelease(lVar10);
      uVar14 = *(ulong *)(lVar11 + 0x10);
      uVar5 = 0;
      do {
        uVar9 = uVar5;
        bVar4 = uVar14 == uVar9;
        if (bVar4) {
          param_2 = 0;
          break;
        }
        if (*(ulong *)(lVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10001ed58);
          (*pcVar3)();
        }
        param_2 = (ulong)*(uint *)(lVar11 + uVar9 * 4 + 0x20);
        uVar13 = *(undefined8 *)(unaff_x20 + 0x80);
        _swift_bridgeObjectRetain(uVar13);
        uVar6 = param_2;
        FUN_1000446bc(param_2,uVar13);
        _swift_bridgeObjectRelease(uVar13);
        uVar5 = uVar9 + 1;
      } while ((uVar6 & 1) != 0);
      _swift_bridgeObjectRelease(lVar11);
      uVar13 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar13);
      local_98 = (byte)uVar2 & 1;
      local_94 = (undefined4)param_2;
      local_90 = CONCAT31(local_90._1_3_,uVar14 == uVar9);
      local_a0 = uVar12;
      uStack_9c = uVar8;
      FUN_1003fb48c(FUN_10003fab0,auStack_b0,0xd0000000000000a9,0x8000000100877660,
                    0xd000000000000022,0x8000000100879250,0x983,0);
    }
    else {
      uVar1 = *(uint *)(*(long *)(lVar10 + 0x38) + param_1 * 4);
      param_2 = (ulong)uVar1;
      _swift_endAccess(local_78);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_90 = uVar12;
      uStack_8c = uVar1;
      FUN_1003fb48c(FUN_10003faf4,&local_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000022
                    ,0x8000000100879250,0x97b,0);
      bVar4 = false;
    }
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_90 = uVar12;
    FUN_1003fb48c(FUN_10003fa90,&local_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000022,
                  0x8000000100879250,0x977,0);
    param_2 = 0;
    bVar4 = false;
  }
LAB_10001ec98:
  return param_2 & 0xffffffff | (ulong)bVar4 << 0x20;
}

