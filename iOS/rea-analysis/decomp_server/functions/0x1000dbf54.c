// rea decompile_all
// name: FUN_1000dbf54
// address: 0x1000dbf54
// body: available
// range: 0x1000dbf54-0x1000dc4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_1000dbf54(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long extraout_x8;
  long lVar16;
  long extraout_x8_00;
  undefined8 *puVar17;
  long extraout_x8_01;
  long lVar18;
  undefined8 extraout_x8_02;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  uint *puVar23;
  long lVar24;
  undefined1 auStack_1b0 [16];
  uint auStack_1a0 [2];
  long lStack_198;
  long local_190 [10];
  long local_140;
  undefined4 local_134;
  undefined *local_c0;
  undefined1 auStack_b8 [32];
  undefined1 uStack_98;
  byte local_97;
  undefined1 auStack_80 [32];
  
  local_134 = (undefined4)param_2;
  lVar8 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = (long)local_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  FUN_1000eb43c();
  local_190[7] = lVar9;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar17 = (undefined8 *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar9 = 0;
  __s10Foundation4DateVMa();
  local_190[9] = *(long *)(lVar9 + -8);
  local_140 = lVar9;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_190[9] + 0x40));
  lVar18 = (long)puVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_190[8] = lVar18;
  __s10Foundation4DateVACycfC();
  local_190[5] = *(undefined8 *)(param_1 + 0x18);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  local_190[6] = uVar10;
  _swift_bridgeObjectRetain();
  __s10Foundation3URLV4pathSSvg();
  lVar7 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask::files;
  local_190[1] = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_190[3] = param_2;
  local_190[4] = uVar10;
  _swift_beginAccess(param_1 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                               ::files,auStack_80,0,0);
  lVar9 = *(long *)(param_1 + lVar7);
  local_190[2] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  lVar20 = lVar9;
  _swift_bridgeObjectRetain();
  FUN_100045cb8();
  _swift_bridgeObjectRelease(lVar9);
  lVar9 = *(long *)(lVar20 + 0x10);
  local_190[0] = lVar20;
  if (lVar9 == 0) {
    local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar23 = (uint *)(lVar20 + 0x20);
    do {
      uVar5 = *puVar23;
      uVar21 = (ulong)uVar5;
      puVar14 = &uStack_98;
      _swift_beginAccess(param_1 + lVar7,puVar14,0x20,0);
      lVar20 = *(long *)(param_1 + lVar7);
      if ((*(long *)(lVar20 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar14 & 1) == 0)) {
        _swift_endAccess(&uStack_98);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(uint *)(lVar18 + -0x10) = uVar5;
        FUN_1003fb4ec(FUN_1000e3698,lVar18 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                      0xd000000000000016,0x80000001008872c0,0x398,0);
      }
      else {
        lVar24 = *(long *)(*(long *)(lVar20 + 0x38) + uVar21 * 8);
        _swift_endAccess(&uStack_98);
        uVar10 = *(undefined8 *)(lVar24 + 0x10);
        uVar3 = *(undefined8 *)(lVar24 + 0x18);
        uVar2 = *(undefined8 *)(lVar24 + 0x20);
        uVar4 = *(undefined8 *)(lVar24 + 0x28);
        _swift_retain(lVar24);
        uVar11 = uVar3;
        _swift_bridgeObjectRetain();
        __s10Foundation3URLV4pathSSvg();
        lVar20 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
                 finalURL;
        _swift_beginAccess(lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                    ::finalURL,auStack_b8,0,0);
        lVar20 = lVar24 + lVar20;
        lVar12 = lVar16;
        (**(code **)(lVar15 + 0x10))(lVar16,lVar20,lVar8);
        __s10Foundation3URLV4pathSSvg();
        (**(code **)(lVar15 + 8))(lVar16,lVar8);
        uVar22 = *(undefined8 *)
                  (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                            ::writtenSize);
        uVar6 = *(undefined1 *)
                 (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                           ::isCompleted);
        _swift_release(lVar24);
        puVar13 = local_c0;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar13 & 1) == 0) {
          plVar1 = (long *)(local_c0 + 0x10);
          local_c0 = (undefined *)0x0;
          FUN_100035bfc(0,*plVar1 + 1,1);
        }
        uVar21 = *(ulong *)(local_c0 + 0x10);
        if (*(ulong *)(local_c0 + 0x18) >> 1 <= uVar21) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(local_c0 + 0x18));
          FUN_100035bfc(puVar13,uVar21 + 1,1,local_c0);
          local_c0 = puVar13;
        }
        *(ulong *)(local_c0 + 0x10) = uVar21 + 1;
        *(uint *)(local_c0 + uVar21 * 0x58 + 0x20) = uVar5;
        *(undefined8 *)(local_c0 + uVar21 * 0x58 + 0x28) = uVar10;
        *(undefined8 *)(local_c0 + uVar21 * 0x58 + 0x30) = uVar3;
        *(undefined8 *)(local_c0 + uVar21 * 0x58 + 0x38) = uVar2;
        *(undefined8 *)(local_c0 + uVar21 * 0x58 + 0x40) = uVar4;
        *(undefined8 *)(local_c0 + uVar21 * 0x58 + 0x48) = uVar11;
        *(undefined1 **)(local_c0 + uVar21 * 0x58 + 0x50) = puVar14;
        *(long *)(local_c0 + uVar21 * 0x58 + 0x58) = lVar12;
        *(long *)(local_c0 + uVar21 * 0x58 + 0x60) = lVar20;
        *(undefined8 *)(local_c0 + uVar21 * 0x58 + 0x68) = uVar22;
        local_c0[uVar21 * 0x58 + 0x70] = uVar6;
      }
      lVar9 = lVar9 + -1;
      puVar23 = puVar23 + 1;
    } while (lVar9 != 0);
  }
  _swift_bridgeObjectRelease(local_190[0]);
  lVar15 = local_140;
  lVar8 = local_190[9];
  lVar20 = local_190[8];
  lVar7 = local_190[7];
  pcVar19 = *(code **)(local_190[9] + 0x10);
  (*pcVar19)((long)puVar17 + (long)*(int *)(local_190[7] + 0x20),local_190[8],local_140);
  (*pcVar19)((long)puVar17 + (long)*(int *)(lVar7 + 0x24),lVar20,lVar15);
  lVar9 = local_190[6];
  *puVar17 = local_190[5];
  puVar17[1] = lVar9;
  lVar9 = local_190[3];
  puVar17[2] = local_190[4];
  puVar17[3] = lVar9;
  puVar17[4] = local_190[1];
  puVar17[5] = local_190[2];
  puVar17[6] = local_c0;
  *(char *)((long)puVar17 + (long)*(int *)(lVar7 + 0x28)) = (char)local_134;
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined8 *)(lVar18 + -0x10) = extraout_x8_02;
  *(undefined8 **)(lVar18 + -8) = puVar17;
  puVar13 = &DAT_100a77cf8;
  FUN_100004bb4(&DAT_100a77cf8,&DAT_10080ca20);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&uStack_98,FUN_1000e36a0,lVar18 + -0x20,puVar13);
  (**(code **)(lVar8 + 8))(lVar20,lVar15);
  FUN_1000e3550(puVar17);
  return (local_97 ^ 0xff) & 1;
}

