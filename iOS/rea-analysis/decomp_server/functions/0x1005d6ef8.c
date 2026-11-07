// rea decompile_all
// name: FUN_1005d6ef8
// address: 0x1005d6ef8
// body: available
// range: 0x1005d6ef8-0x1005d70db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d6ef8(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_190 [248];
  undefined *local_98 [3];
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(&DAT_100b3a708,auStack_78,0,0);
  uVar2 = DAT_100b3a710;
  pcVar1 = DAT_100b3a708;
  if (DAT_100b3a708 != (code *)0x0) {
    local_80 = &DAT_1009da430;
    puVar3 = &DAT_1009d92b8;
    _swift_allocObject(&DAT_1009d92b8,0x101,7);
    uVar5 = param_1[0x18];
    uVar7 = param_1[0x1b];
    uVar6 = param_1[0x1a];
    *(undefined8 *)(puVar3 + 0xd8) = param_1[0x19];
    *(undefined8 *)(puVar3 + 0xd0) = uVar5;
    *(undefined8 *)(puVar3 + 0xe8) = uVar7;
    *(undefined8 *)(puVar3 + 0xe0) = uVar6;
    uVar5 = param_1[0x1c];
    *(undefined8 *)(puVar3 + 0xf8) = param_1[0x1d];
    *(undefined8 *)(puVar3 + 0xf0) = uVar5;
    puVar3[0x100] = *(undefined1 *)(param_1 + 0x1e);
    uVar5 = param_1[0x10];
    uVar7 = param_1[0x13];
    uVar6 = param_1[0x12];
    *(undefined8 *)(puVar3 + 0x98) = param_1[0x11];
    *(undefined8 *)(puVar3 + 0x90) = uVar5;
    *(undefined8 *)(puVar3 + 0xa8) = uVar7;
    *(undefined8 *)(puVar3 + 0xa0) = uVar6;
    uVar5 = param_1[0x14];
    uVar7 = param_1[0x17];
    uVar6 = param_1[0x16];
    *(undefined8 *)(puVar3 + 0xb8) = param_1[0x15];
    *(undefined8 *)(puVar3 + 0xb0) = uVar5;
    *(undefined8 *)(puVar3 + 200) = uVar7;
    *(undefined8 *)(puVar3 + 0xc0) = uVar6;
    uVar5 = param_1[8];
    uVar7 = param_1[0xb];
    uVar6 = param_1[10];
    *(undefined8 *)(puVar3 + 0x58) = param_1[9];
    *(undefined8 *)(puVar3 + 0x50) = uVar5;
    *(undefined8 *)(puVar3 + 0x68) = uVar7;
    *(undefined8 *)(puVar3 + 0x60) = uVar6;
    uVar5 = param_1[0xc];
    uVar7 = param_1[0xf];
    uVar6 = param_1[0xe];
    *(undefined8 *)(puVar3 + 0x78) = param_1[0xd];
    *(undefined8 *)(puVar3 + 0x70) = uVar5;
    *(undefined8 *)(puVar3 + 0x88) = uVar7;
    *(undefined8 *)(puVar3 + 0x80) = uVar6;
    uVar5 = *param_1;
    uVar7 = param_1[3];
    uVar6 = param_1[2];
    *(undefined8 *)(puVar3 + 0x18) = param_1[1];
    *(undefined8 *)(puVar3 + 0x10) = uVar5;
    *(undefined8 *)(puVar3 + 0x28) = uVar7;
    *(undefined8 *)(puVar3 + 0x20) = uVar6;
    uVar5 = param_1[4];
    uVar7 = param_1[7];
    uVar6 = param_1[6];
    *(undefined8 *)(puVar3 + 0x38) = param_1[5];
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
    *(undefined8 *)(puVar3 + 0x48) = uVar7;
    *(undefined8 *)(puVar3 + 0x40) = uVar6;
    local_98[0] = puVar3;
    FUN_10004090c(pcVar1,uVar2);
    FUN_1005d66f8(param_1,auStack_190);
    ppuVar4 = local_98;
    puVar3 = PTR___sypN_100995e88 + 8;
    __sSS10describingSSx_tclufC(ppuVar4,puVar3);
    (*pcVar1)(0,ppuVar4,puVar3,
              "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Extend/XPCSendable.swift"
              ,0xab,2,"sendSync(_:)",0xc,2);
    FUN_10007ed2c(pcVar1,uVar2);
    _swift_bridgeObjectRelease(puVar3);
  }
  (**(code **)(param_3 + 8))(param_2,param_3);
  if (param_2 == (undefined1 *)0x0) {
    FUN_1005d42c0();
    _swift_allocError(&DAT_1009d90b8,param_2,0,0);
    *param_2 = 2;
  }
  else {
    FUN_1005d3d30(param_1);
    _swift_release(param_2);
  }
  return;
}

