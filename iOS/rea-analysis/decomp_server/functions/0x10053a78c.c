// rea decompile_all
// name: FUN_10053a78c
// address: 0x10053a78c
// body: available
// range: 0x10053a78c-0x10053a973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10053a78c(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_e0 [16];
  long alStack_d0 [3];
  byte abStack_b8 [8];
  long alStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar2 = 0;
  local_98 = param_4;
  local_8c = param_5;
  local_88 = param_1;
  local_78 = param_6;
  __sSS10FoundationE8EncodingVMa();
  lVar7 = *(long *)(lVar2 + -8);
  puVar9 = auStack_a0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = *(long *)(param_7 + -8);
  lVar8 = (long)puVar9 - (*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = param_7;
  (**(code **)(param_8 + 0x10))(lVar8,param_7,param_8);
  uVar5 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar5 = param_3 >> 0x38 & 0xf;
  }
  if (uVar5 == 0) {
    _swift_bridgeObjectRelease(param_3);
    uVar10 = local_78;
  }
  else {
    local_70 = param_2;
    uStack_68 = param_3;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar9);
    FUN_1004f9a5c();
    uVar5 = 0;
    puVar4 = puVar9;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (puVar9,0,PTR___sSSN_1009957f8,lVar3);
    (**(code **)(lVar7 + 8))(puVar9,lVar2);
    _swift_bridgeObjectRelease(param_3);
    uVar10 = local_78;
    if (uVar5 >> 0x3c < 0xf) {
      *(long *)(lVar8 + -0x30) = param_7;
      *(long *)(lVar8 + -0x28) = param_8;
      *(undefined8 *)(lVar8 + -0x20) = local_98;
      uVar1 = local_8c;
      *(byte *)(lVar8 + -0x18) = (byte)local_8c & 1;
      *(byte *)(lVar8 + -0x17) = (byte)((uint)uVar1 >> 8) & 1;
      uVar10 = local_78;
      *(undefined8 *)(lVar8 + -0x10) = local_78;
      *(long *)(lVar8 + -8) = lVar8;
      FUN_10012308c(FUN_10053ac58,lVar8 + -0x40,puVar4,uVar5);
      FUN_100006cc8(puVar4,uVar5);
      if (unaff_x21 != 0) {
        FUN_1005187f8(uVar10);
        pcVar6 = *(code **)(local_80 + 8);
        goto LAB_10053a944;
      }
    }
  }
  lVar3 = local_80;
  (**(code **)(local_80 + 0x10))(local_88,lVar8,param_7);
  FUN_1005187f8(uVar10);
  pcVar6 = *(code **)(lVar3 + 8);
LAB_10053a944:
  (*pcVar6)(lVar8,param_7);
  return;
}

