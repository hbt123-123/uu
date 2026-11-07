// rea decompile_all
// name: FUN_10003b8a0
// address: 0x10003b8a0
// body: available
// range: 0x10003b8a0-0x10003bcef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010003bcdc) */
/* WARNING: Removing unreachable block (ram,0x00010003bcc8) */

undefined * FUN_10003b8a0(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_100 [16];
  undefined4 local_f0 [2];
  undefined **local_e8;
  undefined **local_e0;
  long *local_d8;
  long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  ulong uStack_6f;
  
  lVar3 = param_1;
  FUN_10003b530();
  uVar6 = (undefined4)param_1;
  if (lVar3 == 0) {
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_e0 = (undefined **)CONCAT44(local_e0._4_4_,uVar6);
    FUN_1003fb4ec(FUN_10003f004,local_f0,0xd0000000000000a9,0x8000000100877660,0xd00000000000001e,
                  0x8000000100877b80,0x4b5,0);
    local_b8 = (undefined *)0x0;
  }
  else {
    local_a8 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_e0 = (undefined **)CONCAT44(local_e0._4_4_,uVar6);
    FUN_1003fb48c(FUN_10003f00c,local_f0,0xd0000000000000a9,0x8000000100877660,0xd00000000000001e,
                  0x8000000100877b80,0x4bb,0);
    lVar7 = *(long *)(lVar3 + 0x10);
    local_d0 = lVar3;
    if (lVar7 == 0) {
      local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      lVar10 = 0;
      puVar8 = (undefined8 *)(lVar3 + 0x20);
      local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
      do {
        uStack_88 = puVar8[1];
        local_90 = *puVar8;
        local_80 = puVar8[2];
        uStack_6f = *(ulong *)((long)puVar8 + 0x21);
        uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)puVar8 + 0x19) >> 0x38);
        uStack_78 = (undefined1)puVar8[3];
        local_77 = (undefined7)((ulong)puVar8[3] >> 8);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_e0 = (undefined **)CONCAT44(local_e0._4_4_,uVar6);
        local_d8 = &local_90;
        FUN_1003fb45c(FUN_10003f014,local_f0,0xd0000000000000a9,0x8000000100877660,
                      0xd00000000000001e,0x8000000100877b80,0x4bd,0);
        lVar3 = local_a8;
        if (((0 < (int)local_90._4_4_ && 0 < (int)uStack_88) && (0 < (int)uStack_88._4_4_)) &&
           (0 < (int)local_80)) {
          if ((uStack_6f & 0x100000000000000) == 0) {
            bVar2 = SCARRY8(lVar10,1);
            lVar10 = lVar10 + 1;
            lVar3 = lVar10;
            if (bVar2) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10003bcc8);
              (*pcVar1)();
            }
          }
          else {
            if (local_90._4_4_ < uStack_88._4_4_) {
              puVar5 = local_c0;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar4 = local_c0;
              if (((ulong)puVar5 & 1) == 0) {
                puVar4 = (undefined *)0x0;
                FUN_100033f3c(0,*(long *)(local_c0 + 0x10) + 1,1);
              }
              uVar9 = *(ulong *)(puVar4 + 0x10);
              if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar9) {
                puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
                FUN_100033f3c(puVar4,uVar9 + 1,1);
              }
              *(ulong *)(puVar4 + 0x10) = uVar9 + 1;
              local_c0 = puVar4;
            }
            else {
              puVar5 = local_c8;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar4 = local_c8;
              if (((ulong)puVar5 & 1) == 0) {
                puVar4 = (undefined *)0x0;
                FUN_100033f3c(0,*(long *)(local_c8 + 0x10) + 1,1);
              }
              uVar9 = *(ulong *)(puVar4 + 0x10);
              if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar9) {
                puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
                FUN_100033f3c(puVar4,uVar9 + 1,1);
              }
              *(ulong *)(puVar4 + 0x10) = uVar9 + 1;
              local_c8 = puVar4;
            }
            *(ulong *)(puVar4 + uVar9 * 0x30 + 0x41) = uStack_6f;
            *(ulong *)(puVar4 + uVar9 * 0x30 + 0x39) = CONCAT17(uStack_70,local_77);
            *(undefined8 *)(puVar4 + uVar9 * 0x30 + 0x28) = uStack_88;
            *(undefined8 *)(puVar4 + uVar9 * 0x30 + 0x20) = local_90;
            *(ulong *)(puVar4 + uVar9 * 0x30 + 0x38) = CONCAT71(local_77,uStack_78);
            *(undefined8 *)(puVar4 + uVar9 * 0x30 + 0x30) = local_80;
            lVar3 = local_a8;
          }
        }
        local_a8 = lVar3;
        puVar8 = puVar8 + 6;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    _swift_bridgeObjectRelease(local_d0);
    puVar5 = local_c8;
    local_98 = local_c8;
    _swift_bridgeObjectRetain(local_c8);
    FUN_10003361c(&local_98,FUN_1000375a0,FUN_100037e70);
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = local_c0;
    local_a0 = local_c0;
    _swift_bridgeObjectRetain(local_c0);
    FUN_10003361c(&local_a0,FUN_10003714c,FUN_100037db8);
    _swift_bridgeObjectRelease(puVar5);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_e8 = &local_98;
    local_d8 = &local_a8;
    local_f0[0] = uVar6;
    local_e0 = &local_a0;
    FUN_1003fb48c(FUN_10003f020,auStack_100,0xd0000000000000a9,0x8000000100877660,0xd00000000000001e
                  ,0x8000000100877b80,0x4d9,0);
    local_b8 = local_98;
    FUN_10005f47c(local_a0);
  }
  return local_b8;
}

