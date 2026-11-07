// rea decompile_all
// name: FUN_100049a2c
// address: 0x100049a2c
// body: available
// range: 0x100049a2c-0x100049cff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100049a2c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char **ppcVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *local_150;
  undefined4 *local_148;
  long local_120 [17];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  local_120[5] = param_1[5];
  local_120[4] = param_1[4];
  local_120[9] = param_1[7];
  local_120[8] = param_1[6];
  lVar10 = param_1[2];
  uVar12 = param_1[3];
  local_120[2] = 0x532d;
  local_120[3] = 0xe200000000000000;
  local_120[6] = 0x662d;
  local_120[7] = 0xe200000000000000;
  local_120[10] = 0x686361747461;
  local_120[0xb] = 0xe600000000000000;
  local_120[0xc] = 0x742d;
  local_120[0xd] = 0xe200000000000000;
  local_120[0xf] = param_1[1];
  local_120[0xe] = *param_1;
  local_120[0] = lVar10;
  local_120[1] = uVar12;
  local_120[0x10] = local_120[0xe];
  uStack_98 = local_120[0xf];
  local_90 = local_120[8];
  uStack_88 = local_120[9];
  uStack_80 = local_120[4];
  uStack_78 = local_120[5];
  _swift_bridgeObjectRetain(uVar12);
  FUN_10000eb58(&uStack_80,&local_150);
  FUN_10000eb58(&local_90,&local_150);
  FUN_10000eb58(local_120 + 0x10,&local_150);
  local_150 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_100021c8c(0,8,0);
  lVar13 = 0;
  do {
    puVar5 = local_150;
    lVar8 = *(long *)((long)local_120 + lVar13);
    uVar2 = *(undefined8 *)((long)local_120 + lVar13 + 8);
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(lVar8,uVar2);
    _swift_bridgeObjectRetain(uVar2);
    pcVar9 = _strdup((char *)(lVar8 + 0x20));
    _swift_bridgeObjectRelease(uVar2);
    _swift_release(lVar8);
    uVar1 = *(ulong *)(puVar5 + 0x10);
    local_150 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      FUN_100021c8c(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
    }
    puVar5 = local_150;
    *(ulong *)(local_150 + 0x10) = uVar1 + 1;
    *(char **)(local_150 + uVar1 * 8 + 0x20) = pcVar9;
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x80);
  FUN_10000eb08(&DAT_100102c50,&DAT_1000cf6c0);
  _swift_initStaticObject();
  local_150 = puVar5;
  FUN_10002200c();
  puVar5 = local_150;
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(lVar10,uVar12);
  _execv((char *)(lVar10 + 0x20),(char **)(puVar5 + 0x20));
  _swift_release();
  iVar7 = (int)lVar10;
  __s6Darwin5errnos5Int32Vvg();
  pcVar9 = _strerror(iVar7);
  if (pcVar9 == (char *)0x0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100049d00);
    (*pcVar6)();
  }
  uVar12 = 8;
  _swift_arrayDestroy(local_120,8,PTR___sSSN_1000f02f8);
  __sSS7cStringSSSPys4Int8VG_tcfC(pcVar9);
  ppcVar4 = (char **)(puVar5 + 0x20);
  for (lVar13 = *(long *)(puVar5 + 0x10); lVar13 != 0; lVar13 = lVar13 + -1) {
    if (*ppcVar4 != (char *)0x0) {
      _free(*ppcVar4);
    }
    ppcVar4 = ppcVar4 + 1;
  }
  _swift_bridgeObjectRelease(puVar5);
  local_150 = (undefined *)0x0;
  local_148 = (undefined4 *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2c);
  _swift_bridgeObjectRelease(local_148);
  local_150 = (undefined *)0xd00000000000002a;
  local_148 = (undefined4 *)0x80000001000c7240;
  __sSS6appendyySSF(pcVar9,uVar12);
  _swift_bridgeObjectRelease(uVar12);
  puVar11 = local_148;
  FUN_100022760(0x6c,local_150,local_148,DAT_100105680);
  _swift_bridgeObjectRelease();
  FUN_1000607a4();
  uVar3 = *puVar11;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar11,0,0);
  *puVar11 = uVar3;
  _swift_willThrow();
  return;
}

