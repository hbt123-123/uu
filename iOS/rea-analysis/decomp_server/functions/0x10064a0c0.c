// rea decompile_all
// name: FUN_10064a0c0
// address: 0x10064a0c0
// body: available
// range: 0x10064a0c0-0x10064a223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064a0c0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *unaff_x20;
  long unaff_x21;
  long lVar10;
  long local_88;
  long lStack_80;
  undefined1 local_78;
  long local_70;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  __ss7EncoderP16unkeyedContainers015UnkeyedEncodingC0_pyFTj(auStack_68,uVar1,uVar3);
  uVar6 = uStack_48;
  uVar3 = local_50;
  uVar1 = 0x2d;
  if ((char)unaff_x20[4] == '\0') {
    uVar1 = 0x2b;
  }
  FUN_1000ce034(auStack_68,local_50);
  __ss24UnkeyedEncodingContainerP6encodeyySSKFTj(uVar1,0xe100000000000000,uVar3,uVar6);
  _swift_bridgeObjectRelease(0xe100000000000000);
  if (unaff_x21 == 0) {
    lVar2 = *unaff_x20;
    lVar4 = unaff_x20[1];
    lVar5 = unaff_x20[2];
    lVar10 = unaff_x20[3];
    lVar7 = lVar2;
    FUN_100649244(lVar2,lVar4,(char)lVar5,lVar10);
    if (lVar7 == 0) {
      FUN_1000ce034(auStack_68,local_50);
      __ss24UnkeyedEncodingContainerP6encodeyys6UInt64VKFTj(0,local_50,uStack_48);
    }
    else {
      local_88 = lVar2;
      lStack_80 = lVar4;
      local_78 = (char)lVar5;
      local_70 = lVar10;
      FUN_1000ce034(auStack_68,local_50);
      puVar8 = &DAT_100ab8fa0;
      FUN_100004bb4(&DAT_100ab8fa0,&DAT_10084ae30);
      puVar9 = puVar8;
      FUN_10064a75c();
      __ss24UnkeyedEncodingContainerP6encode10contentsOfyqd___tKSTRd__s6UInt64V7ElementRtd__lFTj
                (&local_88,puVar8,puVar9,local_50,uStack_48);
    }
  }
  FUN_10003f094(auStack_68);
  return;
}

