// rea decompile_all
// name: FUN_10012a8e4
// address: 0x10012a8e4
// body: available
// range: 0x10012a8e4-0x10012ac6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10012a8e4(long *param_1)

{
  double dVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  if (((int)param_1[1] == 0) ||
     (uVar12 = param_1[6],
     ((uVar12 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 || (uVar12 & 0x2000000000000000) == 0
     )) {
    FUN_100401b14(0);
    FUN_1003fb48c(thunk_FUN_100128ef8,0,0xd0000000000000a3,0x800000010088e790,0x6628746567726174,
                  0xed0000293a6d6f72,0x1a,0);
  }
  else {
    dVar1 = (double)param_1[2];
    dVar4 = (double)param_1[3];
    uVar2 = param_1[4];
    lVar5 = param_1[5];
    lVar11 = *param_1;
    lVar13 = *(long *)(lVar11 + 0x10);
    if (lVar13 == 0) {
      FUN_10012ac6c(dVar1,dVar4,uVar2,lVar5,uVar12);
      puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      FUN_10012ac6c(dVar1,dVar4,uVar2,lVar5,uVar12);
      puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10006fae0(0,lVar13,0);
      puVar14 = (undefined8 *)(lVar11 + 0x30);
      do {
        uVar3 = puVar14[-1];
        uVar6 = *puVar14;
        uVar9 = *(ulong *)(puVar10 + 0x10);
        uVar7 = *(ulong *)(puVar10 + 0x18);
        _swift_bridgeObjectRetain(uVar6);
        if (uVar7 >> 1 <= uVar9) {
          FUN_10006fae0(1 < uVar7,uVar9 + 1,1);
        }
        *(ulong *)(puVar10 + 0x10) = uVar9 + 1;
        *(undefined8 *)(puVar10 + uVar9 * 0x10 + 0x20) = uVar3;
        *(undefined8 *)(puVar10 + uVar9 * 0x10 + 0x28) = uVar6;
        puVar14 = puVar14 + 5;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar8 = puVar10;
    FUN_100074e04(puVar10);
    _swift_bridgeObjectRelease(puVar10);
    uVar9 = 0;
    FUN_100153074(0x662e63696c627570,0xef6c72752d656c69,puVar8);
    if ((uVar9 & 1) != 0) {
      _swift_bridgeObjectRelease(puVar8);
LAB_10012aae8:
      FUN_1000407a8(dVar1,dVar4,uVar2,lVar5,uVar12);
      if (-1 < (int)uVar2) {
        if (0x7fefffffffffffff < (ulong)ABS(dVar1)) {
          return 0;
        }
        if (((((ulong)ABS(dVar4) < 0x7ff0000000000000) && (0.0 <= dVar1)) && (dVar1 <= 1.0)) &&
           (0.0 <= dVar4)) {
          if (1.0 < dVar4) {
            return 0;
          }
          return uVar2 & 0x7fffffff;
        }
      }
      return 0;
    }
    uVar9 = 0;
    FUN_100153074(0xd000000000000014,0x800000010088e8b0,puVar8);
    if ((uVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar8);
    }
    else {
      uVar9 = 0;
      FUN_100153074(0x746e6f43656c6946,0xec00000073746e65,puVar8);
      _swift_bridgeObjectRelease(puVar8);
      if ((uVar9 & 1) != 0) goto LAB_10012aae8;
    }
    FUN_100401b14(0);
    FUN_1003fb48c(thunk_FUN_100128ef8,0,0xd0000000000000a3,0x800000010088e790,0x6628746567726174,
                  0xed0000293a6d6f72,0x1f,0);
    FUN_1000407a8(dVar1,dVar4,uVar2,lVar5,uVar12);
  }
  return 0;
}

