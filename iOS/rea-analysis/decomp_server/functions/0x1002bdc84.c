// rea decompile_all
// name: FUN_1002bdc84
// address: 0x1002bdc84
// body: available
// range: 0x1002bdc84-0x1002bdf5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bdc84(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *local_f0;
  long local_c8 [13];
  
  if (DAT_100a81b40 != -1) {
    _swift_once(&DAT_100a81b40,FUN_1002be0a0);
  }
  uVar2 = DAT_100b36498;
  lVar10 = DAT_100a81b48;
  local_c8[0] = DAT_100b36480;
  local_c8[1] = DAT_100b36488;
  local_c8[2] = DAT_100b36490;
  local_c8[3] = DAT_100b36498;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  if (lVar10 != -1) {
    _swift_once(&DAT_100a81b48,FUN_1002be584);
  }
  uVar2 = DAT_100b364b8;
  lVar10 = DAT_100a81b50;
  local_c8[4] = DAT_100b364a0;
  local_c8[5] = DAT_100b364a8;
  local_c8[6] = DAT_100b364b0;
  local_c8[7] = DAT_100b364b8;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  if (lVar10 != -1) {
    _swift_once(&DAT_100a81b50,FUN_1002be688);
  }
  uVar2 = DAT_100b364d8;
  local_c8[8] = DAT_100b364c0;
  local_c8[9] = DAT_100b364c8;
  local_c8[10] = DAT_100b364d0;
  local_c8[0xb] = DAT_100b364d8;
  local_f0 = PTR___swiftEmptyArrayStorage_100995ea0;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  lVar10 = 0;
  do {
    lVar1 = *(long *)((long)local_c8 + lVar10);
    uVar3 = *(ulong *)((long)local_c8 + lVar10 + 8);
    uVar2 = *(undefined8 *)((long)local_c8 + lVar10 + 0x10);
    uVar4 = *(undefined8 *)((long)local_c8 + lVar10 + 0x18);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    lVar6 = lVar1;
    uVar9 = uVar3;
    FUN_1002bbc2c(lVar1,uVar3,local_f0);
    if ((uVar9 & 1) == 0) {
      puVar7 = &DAT_100a833e8;
      FUN_100004bb4(&DAT_100a833e8,&DAT_1008178c0);
      _swift_initStackObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(long *)(puVar7 + 0x20) = lVar1;
      *(ulong *)(puVar7 + 0x28) = uVar3;
      *(undefined8 *)(puVar7 + 0x30) = uVar2;
      *(undefined8 *)(puVar7 + 0x38) = uVar4;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002bdf18);
        (*pcVar5)();
      }
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      FUN_1002c0f64(lVar6,lVar6 + 1,puVar7);
      _swift_setDeallocating(puVar7);
      _swift_arrayDestroy(puVar7 + 0x20,*(undefined8 *)(puVar7 + 0x10),&DAT_1009ad080);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar3);
    }
    else {
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      puVar7 = local_f0;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = local_f0;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_1002966ec(0,*(long *)(local_f0 + 0x10) + 1,1,local_f0);
      }
      uVar9 = *(ulong *)(puVar8 + 0x10);
      local_f0 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar9) {
        local_f0 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_1002966ec(local_f0,uVar9 + 1,1,puVar8);
      }
      *(ulong *)(local_f0 + 0x10) = uVar9 + 1;
      *(long *)(local_f0 + uVar9 * 0x20 + 0x20) = lVar1;
      *(ulong *)(local_f0 + uVar9 * 0x20 + 0x28) = uVar3;
      *(undefined8 *)(local_f0 + uVar9 * 0x20 + 0x30) = uVar2;
      *(undefined8 *)(local_f0 + uVar9 * 0x20 + 0x38) = uVar4;
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar3);
    }
    lVar10 = lVar10 + 0x20;
  } while (lVar10 != 0x60);
  _swift_arrayDestroy(local_c8,3,&DAT_1009ad080);
  DAT_100b36478 = local_f0;
  return;
}

