// rea decompile_all
// name: FUN_1000e9934
// address: 0x1000e9934
// body: available
// range: 0x1000e9934-0x1000e9cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000e9934(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong auStack_c0 [4];
  char *local_a0 [2];
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  
  puVar5 = &DAT_100a77e88;
  FUN_100004bb4(&DAT_100a77e88,&DAT_10080ccc8);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_78 = (long)local_a0 - extraout_x8;
  FUN_1000e984c();
  lVar11 = *(long *)(lVar6 + -8);
  local_80 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = ((long)local_a0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar13 = (ulong *)(lVar14 - extraout_x12);
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cd1b4();
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar11 + 0x48);
    local_a0[0] = s________filterFiles___relPath__100888390 + 0x40;
    local_a0[1] = "";
    local_90 = lVar11;
    local_88 = lVar12;
    do {
      lVar11 = local_90;
      FUN_100082394(param_1,puVar13,FUN_1000e984c);
      local_70 = *puVar13;
      uVar2 = puVar13[1];
      if (*(long *)(puVar5 + 0x10) == 0) {
LAB_1000e9b74:
        lVar12 = local_78;
        (**(code **)(lVar11 + 0x38))(local_78,1,1,local_80);
        FUN_100040bb4(lVar12,&DAT_100a77e88,&DAT_10080ccc8);
      }
      else {
        _swift_bridgeObjectRetain(puVar5);
        uVar7 = local_70;
        uVar9 = uVar2;
        FUN_1001a2c70(local_70);
        lVar3 = local_78;
        if ((uVar9 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar5);
          goto LAB_1000e9b74;
        }
        FUN_100082394(*(long *)(puVar5 + 0x38) + uVar7 * lVar12,local_78,FUN_1000e984c);
        _swift_bridgeObjectRelease(puVar5);
        (**(code **)(lVar11 + 0x38))(lVar3,0,1,local_80);
        FUN_100040bb4(lVar3,&DAT_100a77e88,&DAT_10080ccc8);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        puVar13[-2] = (ulong)puVar13;
        FUN_1003fb4bc(FUN_1000ea3ec,puVar13 + -4,0xd0000000000000a9,
                      (ulong)local_a0[1] | 0x8000000000000000,0xd000000000000016,
                      (ulong)local_a0[0] | 0x8000000000000000,0x18e,0);
      }
      FUN_100082394(puVar13,lVar14,FUN_1000e984c);
      puVar8 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = local_70;
      uVar9 = uVar2;
      local_68 = puVar5;
      FUN_1001a2c70();
      uVar10 = (ulong)~(uint)uVar9 & 1;
      lVar11 = *(long *)(puVar5 + 0x10) + uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000e9ce0);
        (*pcVar4)();
      }
      if (*(long *)(puVar5 + 0x18) < lVar11) {
        FUN_1000699f8(lVar11,puVar8);
        uVar7 = local_70;
        uVar10 = uVar2;
        FUN_1001a2c70();
        if (((uint)uVar9 & 1) != ((uint)uVar10 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000e9cf4);
          (*pcVar4)();
        }
      }
      else if (((ulong)puVar8 & 1) == 0) {
        FUN_1000648f8();
      }
      puVar5 = local_68;
      lVar12 = local_88;
      if ((uVar9 & 1) == 0) {
        *(ulong *)(local_68 + (uVar7 >> 6) * 8 + 0x40) =
             *(ulong *)(local_68 + (uVar7 >> 6) * 8 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar1 = (ulong *)(*(long *)(local_68 + 0x30) + uVar7 * 0x10);
        *puVar1 = local_70;
        puVar1[1] = uVar2;
        FUN_1000823d8(lVar14,*(long *)(local_68 + 0x38) + uVar7 * local_88,FUN_1000e984c);
        if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000e9ce4);
          (*pcVar4)();
        }
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        _swift_bridgeObjectRetain(uVar2);
      }
      else {
        FUN_1000ea3a8(lVar14,*(long *)(local_68 + 0x38) + uVar7 * local_88);
      }
      FUN_1000d27dc(puVar13,FUN_1000e984c);
      param_1 = param_1 + lVar12;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return puVar5;
}

