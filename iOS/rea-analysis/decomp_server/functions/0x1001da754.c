// rea decompile_all
// name: FUN_1001da754
// address: 0x1001da754
// body: available
// range: 0x1001da754-0x1001da97b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001da754(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined1 auStack_140 [16];
  undefined8 *local_130;
  undefined1 auStack_120 [24];
  undefined8 *local_108 [3];
  undefined *local_f0;
  
  if ((param_2 & 1) == 0) {
    puVar7 = param_1;
    FUN_1003a1ad0();
    uVar10 = *puVar7;
    puVar2 = (undefined8 *)puVar7[1];
    puVar8 = &DAT_100a75980;
    FUN_100004bb4(&DAT_100a75980,&DAT_100809a40);
    _swift_initStackObject();
    *(undefined8 *)(puVar8 + 0x18) = 4;
    *(undefined8 *)(puVar8 + 0x10) = 2;
    puVar7 = puVar2;
    _swift_bridgeObjectRetain();
    FUN_1003a1304();
    puVar5 = PTR___sSiN_100995968;
    uVar1 = *puVar7;
    uVar3 = puVar7[1];
    local_f0 = PTR___sSiN_100995968;
    local_108[0] = param_1;
    FUN_10003e8bc(local_108,puVar8 + 0x30);
    *(undefined8 *)(puVar8 + 0x20) = uVar1;
    *(undefined8 *)(puVar8 + 0x28) = uVar3;
    _swift_bridgeObjectRetain(uVar3);
    ppuVar9 = local_108;
    FUN_10003f094();
    FUN_1003a132c();
    lVar6 = _TtC14UURemoteServer15TerminalManager::sessions;
    puVar7 = *ppuVar9;
    puVar4 = ppuVar9[1];
    _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,auStack_120,0,0);
    local_108[0] = *(undefined8 **)(*(long *)(unaff_x20 + lVar6) + 0x10);
    local_f0 = puVar5;
    FUN_10003e8bc(local_108,puVar8 + 0x60);
    *(undefined8 **)(puVar8 + 0x50) = puVar7;
    *(undefined8 **)(puVar8 + 0x58) = puVar4;
    _swift_bridgeObjectRetain(puVar4);
    FUN_10003f094(local_108);
    FUN_1000f62a0(uVar10,puVar2,puVar8);
    _swift_bridgeObjectRelease(puVar2);
    _swift_setDeallocating(puVar8);
    _swift_arrayDestroy(puVar8 + 0x20,2,&DAT_1009b7a40);
    uVar10 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar10);
    local_130 = param_1;
    FUN_1003fb48c(FUN_1001e03a0,auStack_140,0xd000000000000095,0x8000000100889250,0xd00000000000002d
                  ,0x800000010089e580,0x233,0);
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001db184,0,0xd000000000000095,0x8000000100889250,0xd00000000000002d,
                  0x800000010089e580,0x22c,0);
  }
  return;
}

