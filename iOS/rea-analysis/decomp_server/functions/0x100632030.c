// rea decompile_all
// name: FUN_100632030
// address: 0x100632030
// body: available
// range: 0x100632030-0x10063217b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_100632030(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),PTR___sSlTL_1009959e8
             ,PTR___s5IndexSlTl_1009956e8);
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_10063213c;
  uVar7 = (*(long *)(lVar5 + 0x40) + (ulong)*(byte *)(lVar5 + 0x50) &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)) + *(long *)(lVar5 + 0x40);
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 >> 0x10 == 0) {
      if (uVar8 < 0x100) {
        if (1 < uVar8) goto LAB_100632098;
        goto LAB_100632138;
      }
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
    if (uVar8 != 0) {
LAB_1006320e0:
      uVar1 = 0;
      if (uVar6 < 4) {
        uVar1 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
      }
      if (uVar6 != 0) {
        uVar3 = 4;
        if (uVar6 < 4) {
          uVar3 = uVar6;
        }
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            uVar7 = (ulong)(byte)*param_1;
          }
          else {
            uVar7 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar3 == 3) {
          uVar7 = (ulong)(uint3)*param_1;
        }
        else {
          uVar7 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + ((uint)uVar7 | uVar1) + 1);
    }
  }
  else {
LAB_100632098:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
    if (*(byte *)((long)param_1 + uVar7) != 0) goto LAB_1006320e0;
  }
LAB_100632138:
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_10063213c:
                    /* WARNING: Could not recover jumptable at 0x00010063214c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  return param_1;
}

