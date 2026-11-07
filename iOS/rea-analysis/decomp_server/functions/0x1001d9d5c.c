// rea decompile_all
// name: FUN_1001d9d5c
// address: 0x1001d9d5c
// body: available
// range: 0x1001d9d5c-0x1001da107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d9d5c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  char local_8c;
  undefined1 local_8b;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar1 = _TtC14UURemoteServer15TerminalManager::lastKnownStates;
  uVar9 = 0x676e696e6e7572;
  puVar5 = &local_78;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::lastKnownStates,puVar5,0x20,
                     0);
  lVar8 = *(long *)(unaff_x20 + lVar1);
  uVar10 = (uint)param_2;
  if ((*(long *)(lVar8 + 0x10) == 0) ||
     (lVar11 = param_1, thunk_FUN_1001a2c34(), ((ulong)puVar5 & 1) == 0)) {
    _swift_endAccess(&local_78);
    cVar12 = '\x03';
  }
  else {
    cVar12 = *(char *)(*(long *)(lVar8 + 0x38) + lVar11);
    _swift_endAccess(&local_78);
    if (cVar12 == '\0') {
      lVar8 = -0x1900000000000000;
      uVar3 = uVar9;
joined_r0x0001001da034:
      if ((param_2 & 0xff) != 0) goto LAB_1001da038;
LAB_1001da078:
      lVar11 = -0x1900000000000000;
      uVar7 = uVar9;
      if (uVar3 == 0x676e696e6e7572) goto LAB_1001da0a4;
    }
    else {
      if (cVar12 != '\x01') {
        lVar8 = -0x1a00000000000000;
        uVar3 = 0x646574697865;
        goto joined_r0x0001001da034;
      }
      lVar8 = -0x1800000000000000;
      uVar3 = 0x6465686361746564;
      if ((param_2 & 0xff) == 0) goto LAB_1001da078;
LAB_1001da038:
      if ((uVar10 & 0xff) == 1) {
        lVar11 = -0x1800000000000000;
        uVar7 = 0x6465686361746564;
        if (uVar3 == 0x6465686361746564) goto LAB_1001da0a4;
      }
      else {
        lVar11 = -0x1a00000000000000;
        uVar7 = 0x646574697865;
        if (uVar3 == 0x646574697865) {
LAB_1001da0a4:
          if (lVar8 == lVar11) {
            _swift_bridgeObjectRelease(lVar8);
            _swift_bridgeObjectRelease(lVar11);
            return;
          }
        }
      }
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,lVar8,uVar7,lVar11,0);
    _swift_bridgeObjectRelease(lVar8);
    _swift_bridgeObjectRelease(lVar11);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  _swift_beginAccess(unaff_x20 + lVar1,&local_78,0x21,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_isUniquelyReferenced_nonNull_native(uVar4);
  local_80 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_100061f48(param_2,param_1,uVar4);
  *(undefined8 *)(unaff_x20 + lVar1) = local_80;
  _swift_endAccess(&local_78);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_8b = (undefined1)param_2;
  local_90 = (int)param_1;
  local_8c = cVar12;
  FUN_1003fb48c(FUN_1001e03a8,auStack_a0,0xd000000000000095,0x8000000100889250,0xd000000000000029,
                0x800000010089e650,0x338,0);
  local_78 = 0x3a6574617473;
  uStack_70 = 0xe600000000000000;
  local_80 = CONCAT44(local_80._4_4_,(int)param_1);
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3a,0xe100000000000000);
  if ((param_2 & 0xff) == 0) {
    uVar4 = 0xe700000000000000;
    uVar3 = uVar9;
  }
  else {
    bVar2 = (uVar10 & 0xff) != 1;
    uVar3 = 0x6465686361746564;
    if (bVar2) {
      uVar3 = 0x646574697865;
    }
    uVar4 = 0xe800000000000000;
    if (bVar2) {
      uVar4 = 0xe600000000000000;
    }
  }
  __sSS6appendyySSF(uVar3,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = uStack_70;
  FUN_1001e03b8(local_78,uStack_70);
  _swift_bridgeObjectRelease(uVar4);
  if ((param_2 & 0xff) == 0) {
    uVar4 = 0xe700000000000000;
  }
  else {
    if ((uVar10 & 0xff) != 1) {
      _swift_bridgeObjectRelease(0xe600000000000000);
      goto LAB_1001d9ffc;
    }
    uVar4 = 0xe800000000000000;
    uVar9 = 0x6465686361746564;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar9,uVar4,0x646574697865,0xe600000000000000,0);
  _swift_bridgeObjectRelease(uVar4);
  if ((uVar9 & 1) == 0) {
    return;
  }
LAB_1001d9ffc:
  _swift_beginAccess(unaff_x20 + lVar1,&local_78,0x21,0);
  FUN_1001de20c(param_1);
  _swift_endAccess(&local_78);
  return;
}

