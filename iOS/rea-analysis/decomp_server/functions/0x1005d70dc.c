// rea decompile_all
// name: FUN_1005d70dc
// address: 0x1005d70dc
// body: available
// range: 0x1005d70dc-0x1005d7323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d70dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_198 [248];
  undefined *local_a0 [3];
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(&DAT_100b3a708,auStack_80,0,0);
  uVar4 = DAT_100b3a710;
  pcVar1 = DAT_100b3a708;
  if (DAT_100b3a708 != (code *)0x0) {
    local_88 = &DAT_1009da430;
    puVar2 = &DAT_1009d92b8;
    _swift_allocObject(&DAT_1009d92b8,0x101,7);
    uVar5 = param_2[0x18];
    uVar7 = param_2[0x1b];
    uVar6 = param_2[0x1a];
    *(undefined8 *)(puVar2 + 0xd8) = param_2[0x19];
    *(undefined8 *)(puVar2 + 0xd0) = uVar5;
    *(undefined8 *)(puVar2 + 0xe8) = uVar7;
    *(undefined8 *)(puVar2 + 0xe0) = uVar6;
    uVar5 = param_2[0x1c];
    *(undefined8 *)(puVar2 + 0xf8) = param_2[0x1d];
    *(undefined8 *)(puVar2 + 0xf0) = uVar5;
    puVar2[0x100] = *(undefined1 *)(param_2 + 0x1e);
    uVar5 = param_2[0x10];
    uVar7 = param_2[0x13];
    uVar6 = param_2[0x12];
    *(undefined8 *)(puVar2 + 0x98) = param_2[0x11];
    *(undefined8 *)(puVar2 + 0x90) = uVar5;
    *(undefined8 *)(puVar2 + 0xa8) = uVar7;
    *(undefined8 *)(puVar2 + 0xa0) = uVar6;
    uVar5 = param_2[0x14];
    uVar7 = param_2[0x17];
    uVar6 = param_2[0x16];
    *(undefined8 *)(puVar2 + 0xb8) = param_2[0x15];
    *(undefined8 *)(puVar2 + 0xb0) = uVar5;
    *(undefined8 *)(puVar2 + 200) = uVar7;
    *(undefined8 *)(puVar2 + 0xc0) = uVar6;
    uVar5 = param_2[8];
    uVar7 = param_2[0xb];
    uVar6 = param_2[10];
    *(undefined8 *)(puVar2 + 0x58) = param_2[9];
    *(undefined8 *)(puVar2 + 0x50) = uVar5;
    *(undefined8 *)(puVar2 + 0x68) = uVar7;
    *(undefined8 *)(puVar2 + 0x60) = uVar6;
    uVar5 = param_2[0xc];
    uVar7 = param_2[0xf];
    uVar6 = param_2[0xe];
    *(undefined8 *)(puVar2 + 0x78) = param_2[0xd];
    *(undefined8 *)(puVar2 + 0x70) = uVar5;
    *(undefined8 *)(puVar2 + 0x88) = uVar7;
    *(undefined8 *)(puVar2 + 0x80) = uVar6;
    uVar5 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    *(undefined8 *)(puVar2 + 0x18) = param_2[1];
    *(undefined8 *)(puVar2 + 0x10) = uVar5;
    *(undefined8 *)(puVar2 + 0x28) = uVar7;
    *(undefined8 *)(puVar2 + 0x20) = uVar6;
    uVar5 = param_2[4];
    uVar7 = param_2[7];
    uVar6 = param_2[6];
    *(undefined8 *)(puVar2 + 0x38) = param_2[5];
    *(undefined8 *)(puVar2 + 0x30) = uVar5;
    *(undefined8 *)(puVar2 + 0x48) = uVar7;
    *(undefined8 *)(puVar2 + 0x40) = uVar6;
    local_a0[0] = puVar2;
    FUN_10004090c(pcVar1,uVar4);
    FUN_1005d66f8(param_2,auStack_198);
    ppuVar3 = local_a0;
    puVar2 = PTR___sypN_100995e88 + 8;
    __sSS10describingSSx_tclufC(ppuVar3,puVar2);
    (*pcVar1)(0,ppuVar3,puVar2,
              "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Extend/XPCSendable.swift"
              ,0xab,2,"sendSyncByAsync(_:decodeTo:timeout:)",0x24,2);
    FUN_10007ed2c(pcVar1,uVar4);
    _swift_bridgeObjectRelease(puVar2);
  }
  (**(code **)(param_7 + 8))();
  if (param_5 == (undefined1 *)0x0) {
    FUN_1005d42c0();
    puVar2 = &DAT_1009d90b8;
    _swift_allocError(&DAT_1009d90b8,param_5,0,0);
    *param_5 = 2;
    *param_1 = puVar2;
    puVar2 = &DAT_100aadca8;
    FUN_100004c48(&DAT_100aadca8,&DAT_10083f250);
    uVar4 = 0;
    __ss6ResultOMa(0,param_6,puVar2,PTR___ss5ErrorWS_100995c48);
    _swift_storeEnumTagMultiPayload(param_1,uVar4,1);
  }
  else {
    FUN_1005d40b4(param_1,param_2,param_3,param_4,param_6,param_8,param_9);
    _swift_release(param_5);
  }
  return;
}

